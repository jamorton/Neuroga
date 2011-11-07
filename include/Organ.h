#ifndef __ORGAN_H__
#define __ORGAN_H__

#include "common.h"

#include "Connector.h"

class Organ : public Connector
{
public:

	Organ() : m_angle(0.0) {}

	inline void angle(Number& angle) { m_angle = angle; }
	inline Number angle() const { return m_angle; }

private:
	Number m_angle;
};

class BlinkOrgan : public Organ
{

};

#endif
