
#ifndef __INDIVIDUAL_H__
#define __INDIVIDUAL_H__

#include "common.h"

#include "Connection.h"
#include "Neuron.h"
#include "Organ.h"

class Genome;

class Individual
{
public:

	Individual(Genome * myGenome);
	~Individual();

	const std::vector<Connection>& connections() const { return m_connections; }

private:

	Genome * m_genome;

	std::vector<Connection> m_connections;
	std::vector<Neuron *> m_neurons;
	std::vector<Organ *> m_organs;

};

#endif
