
#ifndef __CONNECTOR_H__
#define __CONNECTOR_H__

#include "common.h"

class Connection;

class Connector
{
public:

	Connector() : m_isOn(false) {}

	inline void addOutput(Connection * c) { m_outputs.push_back(c); }
	inline bool isOn() const { return m_isOn; }

protected:
	std::vector<Connection *> m_outputs;
	bool m_isOn;
};


#endif
