#pragma once
#include "TimePhases.h"

class Chaff {
public:
	Chaff(const int id, const double maxRCS, const double T_trend, const double CreationTime, const double T_c, const double T_if,
		const double T_ef);
	Chaff();
	double calculateRCS(const int id, const double time);

private:
	int m_id;
	double m_maxRCS;
	double m_T_trend;
	TimePhases* m_TimePhases;
};