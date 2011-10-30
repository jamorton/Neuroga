#ifndef __NEURON_H__
#define __NEURON_H__

#include "common.h"
#include "Connector.h"

class Neuron : public Connector
{
public:

	Neuron(Number thresh) : m_threshold(thresh), m_curVal(0) {}

	inline Number threshold() const { return m_threshold; }
	inline Number curVal() const { return m_curVal; }

private:
	Number m_threshold;
	Number m_curVal;
};

#endif
