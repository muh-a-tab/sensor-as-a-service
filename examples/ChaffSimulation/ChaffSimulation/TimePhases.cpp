#pragma once
#include "TimePhases.h"

TimePhases::TimePhases(const double CreationTime, const double T_c, const double T_if, const double T_ef) {
	this->m_CreationTime = CreationTime;
	this->m_T_c = T_c;
	this->m_T_if = T_if;
	this->m_T_ef = T_ef;
}

double TimePhases::getM_CreationTime() {
	return m_CreationTime;
}
double TimePhases::getM_T_c() {
	return m_T_c;
}
double TimePhases::getM_T_if() {
	return m_T_if;
}
double TimePhases::getM_T_ef() {
	return m_T_ef;
}


