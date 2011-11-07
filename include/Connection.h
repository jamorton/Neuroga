#ifndef __CONNECTION_H__
#define __CONNECTION_H__

class Connector;

class Connection
{
public:

	Connection(Number weight, Connector * origin, Connector * target) :
		m_weight(weight), m_origin(origin), m_target(target) {}

	inline Number weight() const { return m_weight; }
	inline Connector * origin() const { return m_origin; }
	inline Connector * target() const { return m_target; }

private:
	Number m_weight;
	Connector * m_origin;
	Connector * m_target;
};

#endif
