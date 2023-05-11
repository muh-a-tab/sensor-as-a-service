#pragma once

class TimePhases {

public:
	TimePhases(const double CreationTime, const double T_c,
		const double T_if, const double T_ef);

	double getM_CreationTime();
	double getM_T_c();
	double getM_T_if();
	double getM_T_ef();
private:
	double m_CreationTime;
	double m_T_c;
	double m_T_if;
	double m_T_ef;

};
