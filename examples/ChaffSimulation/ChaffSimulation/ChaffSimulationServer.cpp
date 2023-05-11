#pragma comment(lib, "Ws2_32.lib")
#include <iostream>
#include <map>

#include <grpcpp/impl/codegen/server_context.h>
#include <grpc++/server_builder.h>

#include "Chaff.h"
#include "grpcChaffModel/ChaffModel.grpc.pb.h"


class ChaffModelServiceImpl final : public ChaffModel::Service {
public:

	grpc::Status createChaff(grpc::ServerContext* context,
		const ChaffCreateRequest* request,
		ResponseMessage* reply)  override
	{
		const int _id = request->id();
		const double _maxrcs = request->maxrcs();
		const double _t_trend = request->t_trend();
		const double _creationtime = request->creationtime();
		const double _t_c = request->t_c();
		const double _t_if = request->t_if();
		const double _t_ef = request->t_ef();

		//Checking Chaff Paramaters
		CreationInfo isChaffValid = getChaffResponseMessage(
			_id, _maxrcs, _t_trend, _creationtime, _t_c, _t_if, _t_ef);

		if (isChaffValid.success) {

			//Checking Chaff Models Map size
			CreationInfo getMapCheck = getMapResponseMessage(ChaffModels.size(), ChaffModels.count(_id));

			if (getMapCheck.success) {

				Chaff newChaff{
					_id,
					_maxrcs,
					_t_trend,
					_creationtime,
					_t_c,
					_t_if,
					_t_ef
				};

				ChaffModels.try_emplace(_id, newChaff);
				std::cout << "id:" << request->id() << " " << getMapCheck.msg << " \n";
			}
			else {
				std::cout << "id:" << request->id() << getMapCheck.msg << "\n";
			}

			reply->set_responsemessage(getMapCheck.msg);
			return grpc::Status::OK;
		}
		else {
			std::cout << "id:" << request->id() << " " << isChaffValid.msg << "\n";
			reply->set_responsemessage(isChaffValid.msg);
			return grpc::Status::OK;
		}
	}

	grpc::Status getChaffInfo(grpc::ServerContext* context,
		const ChaffInfoRequest* request,
		ChaffInfo* reply)  override
	{

		auto chaffIt = ChaffModels.find(request->id());
		// Verilen id'ye karþýlýk ChafModel map'inde Chaff modeli bulunmuþsa
		if (chaffIt != ChaffModels.end())
		{
			reply->set_rcs(ChaffModels[request->id()].calculateRCS(request->id(), request->simulationtime()));
		}
		else {
			std::cout << "id:" << request->id() << " is not created Chaff Model " << "\n";
			reply->set_rcs(-1);
		}

		return grpc::Status::OK;
	}

private:
	std::map<int, Chaff> ChaffModels;

	struct CreationInfo
	{
		bool success;
		std::string msg;
	};

	/*
	*			Check: Chaff		// ileride detayli impl ihtaci olursa, interface ile soyutlayip
	*								// dependency injection ile log mekanizmasini kullan
	* */
	CreationInfo getChaffResponseMessage(const int id, const double maxRCS, const double T_trend,
		const double CreationTime, const double T_c, const double T_if, const double T_ef) {

		// Parametreler 0 dan küçükse
		if (id < 0 || maxRCS < 0 || T_c < 0 || T_if < 0 || T_ef < 0 || T_trend < 0 || CreationTime < 0) {
			return { false, "Parameters Cannot be Negative Values" };
		}

		// Creation Time, T_c den büyük olamaz.
		else if (CreationTime >= T_c) {
			return { false, "CreationTime is not less than T_c , T_if and T_ef" };
		}

		// T_c, T_ef ve T_if den büyükse
		else if (T_c >= T_if) {
			return { false, "T_c is not less than T_ef and T_if" };
		}

		// T_if, T_ef den büyükse
		else if (T_if >= T_ef) {
			return { false, "T_if is not less than T_ef" };
		}
		else {
			return { true, "SUCCESS" };
		}
	}


	/*			Check: Map				// ileride detayli impl ihtaci olursa, interface ile soyutlayip
	*									// dependency injection ile log mekanizmasini kullan
	* */
	CreationInfo getMapResponseMessage(int size, int count) {

		// Oluþturulan Map size'ý kontrol ediliyor
		if (size > 9) {
			return { false , " Max 10 Chaff Models can be created" };
		}

		// Gönderilen id oluþturulmuþsa
		else if (count > 0) {
			return { false, " has already been created" };
		}
		else {
			return { true, "SUCCESS" };
		}
	}
};

void RunServer(std::string address) {

	ChaffModelServiceImpl service;
	grpc::ServerBuilder builder;

	builder.AddListeningPort(address, grpc::InsecureServerCredentials());
	builder.RegisterService(&service);

	std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
	std::cout << "Server listening on port: " << address << std::endl;
	server->Wait();

}

int main() {
	std::string address("localhost:9090");
	RunServer(address);

	return 0;
}