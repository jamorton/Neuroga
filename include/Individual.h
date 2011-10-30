
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

private:

	Genome * m_genome;

	std::vector<Connection> connections;
	std::vector<Neuron> neurons;
	std::vector<Organ> organs;

};

#endif
