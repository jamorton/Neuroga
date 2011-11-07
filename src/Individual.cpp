
#include "Individual.h"
#include "Genome.h"
#include "Connector.h"
#include "Neuron.h"
#include "OrganRegistry.h"

#include <iostream>

// hold connection ref numbers so they can be turned into actual
// object pointers after all dna has been decoded
struct ConnTemp {
	Number origin;
	Number target;
	Number weight;
};

inline int _range(Number x, int max)
{
    return (int)(x * (max + 1));
}

#define next() (m_genome->at(left--))

Individual::Individual(Genome * myGenome) : m_genome(myGenome)
{
	std::vector<Connector*> targs;
	std::vector<ConnTemp> conns;
	auto left = m_genome->size() - 1;

	while (left >= 3) {
		Number type = next();
		// Connection
		if (type >= 0.4) {
			conns.push_back({
				next(), //origin
				next(), //target
				next()  //weight
			});
		// Neuron
		} else if (type >= 0.15) {
			Neuron * n = new Neuron(next());
			m_neurons.push_back(n);
			targs.push_back(n);
		// Organ
		} else {
			Organ * o = OrganRegistry::create(next());
			m_organs.push_back(o);
			targs.push_back(o);
		}
	}
}

Individual::~Individual() {

	for (Organ * o : m_organs)
		delete o;
}

#undef next
