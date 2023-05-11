#pragma comment(lib, "Ws2_32.lib")
#include <iostream>

#include <grpc++/grpc++.h>

#include "grpcChaffModel/ChaffModel.grpc.pb.h"

const int id = 2;
const double maxRCS = 200.0;
const double T_c = 15.0;
const double T_if = 50.0;
const double T_ef = 100.0;
const double T_trend = 15.0;
const double creationTime = 0.0;

ChaffCreateRequest createChaffRequest(const int id, const double maxRCS, const double T_c, const double T_if,
	const double T_ef, const double T_trend, const double creationTime) {

	ChaffCreateRequest createRequest;

	createRequest.set_id(id);
	createRequest.set_maxrcs(maxRCS);
	createRequest.set_t_c(T_c);
	createRequest.set_t_if(T_if);
	createRequest.set_t_ef(T_ef);
	createRequest.set_t_trend(T_trend);
	createRequest.set_creationtime(creationTime);

	return createRequest;
}


void CreateChaffModel(const std::unique_ptr<ChaffModel::Stub>& stub) {

	ChaffCreateRequest requestCreate = createChaffRequest(id, maxRCS, T_c, T_if, T_ef, T_trend, creationTime);
	ResponseMessage replyCreate;
	grpc::ClientContext contextCreate;

	grpc::Status status = stub->createChaff(&contextCreate, requestCreate, &replyCreate);

	if (status.ok()) {
		std::cout << replyCreate.responsemessage() << std::endl;
	}

}

void RunChaffModel(std::unique_ptr<ChaffModel::Stub>& stub) {
	
	for (double i = creationTime; i < T_ef; i += 0.1) {
		grpc::ClientContext contextInfo;
		ChaffInfoRequest request;
		ChaffInfo info;
		request.set_id(id);
		request.set_simulationtime(i);
		stub->getChaffInfo(&contextInfo, request, &info);

		std::cout << info.rcs() << std::endl;

	}
}

int main(int argc, char** argv) {
	std::string address = "localhost:9090";
	std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel(address,grpc::InsecureChannelCredentials());

	std::unique_ptr<ChaffModel::Stub> stub = ChaffModel::NewStub(channel);

	CreateChaffModel(stub);

	RunChaffModel(stub);


	return 0;
}