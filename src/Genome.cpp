
#include "Genome.h"

#define DNA_RANDFUNC() (randomNumber())

void Genome::randomize()
{
	for (auto & val : m_dna)
		val = DNA_RANDFUNC();
}

void Genome::mutate()
{
	for (auto & val : m_dna)
		if (randomNumber() < CONFIG_MUTATE_RATE)
			val = DNA_RANDFUNC();
}

std::pair<Genome *, Genome *> Genome::crossover(Genome * dad, Genome * mom)
{
	int cpoint = randomInt(1, CONFIG_DNA_LEN-2), i = -1;
	Genome * c1 = new Genome;
	Genome * c2 = new Genome;

	while (++i < cpoint) {
		c1->set(i, dad->at(i));
		c2->set(i, mom->at(i));
	}

	while (++i < CONFIG_DNA_LEN) {
		c1->set(i, mom->at(i));
		c2->set(i, dad->at(i));
	}

	return std::pair<Genome*, Genome*>(c1, c2);
}
