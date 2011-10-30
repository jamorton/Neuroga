
#include "Individual.h"
#include "Genome.h"
#include "Connector.h"

// hold connection ref numbers so they can be turned into actual
// object pointers after all dna has been decoded
struct ConnTemp {
	Number origin;
	Number target;
	Number weight;
};

Individual::Individual(Genome * myGenome) : m_genome(myGenome)
{
	std::vector<Connector*> targs;
	std::vector<ConnTemp> conns(40);
	uint left = m_genome->size() - 1;
	while (left >= 3) {
		Number type = m_genome->at(left--);
		// Connection
		if (type >= 0.4) {
			conns.push_back({
				m_genome->at(left--),
				m_genome->at(left--),
				m_genome->at(left--)
			});
		// Neuron
		} else if (type >= 0.15) {

		// Organ
		} else {

		}

	}
}
