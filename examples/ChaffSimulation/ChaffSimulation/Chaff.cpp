#include <cmath>
#include "Chaff.h"
#include <string>
#include <iostream>

static constexpr double PI = 3.141592653589793;
static constexpr double PI_1 = 1.0 / PI;


Chaff::Chaff() {
};

Chaff::Chaff(const int id, const double maxRCS, const double T_trend, const double CreationTime, const double T_c, const double T_if,
	const double T_ef) {

	this->m_id = id;
	this->m_maxRCS = maxRCS;
	this->m_T_trend = T_trend;
	this->m_TimePhases = new TimePhases(CreationTime, T_c, T_if, T_ef);
}

struct CreationInfo
{
	bool success;
	std::string msg;
};

/*
*			Check: RCS Info			// ileride detayli impl ihtaci olursa, interface ile soyutlayip 
*									// dependency injection ile log mekanizmasini kullan
* */
CreationInfo getInfoResponseMessage(double simulationTime, double createdTime, double t_ef) {
	if (simulationTime < createdTime || t_ef < simulationTime) {

		return { false , "simulationTime must be between createdTime and t_ef" };
	}
	else {
		return { true, "SUCCESS" };
	}
}

double Chaff::calculateRCS(const int id, const double time) {
	CreationInfo info = getInfoResponseMessage(time, m_TimePhases->getM_CreationTime(), m_TimePhases->getM_T_ef());

	if (info.success) {

		const double chaftime = time - m_TimePhases->getM_CreationTime();
		double bloomTrendRate = 0;
		if (chaftime < m_TimePhases->getM_T_c()) {

			bloomTrendRate = 1 - std::exp(-chaftime / (m_TimePhases->getM_T_c() - chaftime));
		}
		else if (chaftime >= m_TimePhases->getM_T_c() && chaftime <= m_TimePhases->getM_T_if()) {
			bloomTrendRate = 1;
		}
		else if (chaftime > m_TimePhases->getM_T_if() && chaftime <= m_TimePhases->getM_T_ef()) {
			bloomTrendRate = 0.5 - PI_1 * std::atan(chaftime - m_TimePhases->getM_T_if() - m_T_trend);
		}

		const double rcs = bloomTrendRate * m_maxRCS;

		return rcs;
	}
	else {

		std::cout << "id:" << m_id << " " << info.msg << "\n";
		return -1;
	}

}