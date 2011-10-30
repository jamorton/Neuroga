
#include "Genome.h"

#define DNA_RANDFUNC() (randomNumber())
#define dlen CONFIG_DNA_LEN

Genome::Genome() : m_dna(dlen)
{
	m_dna.resize(dlen);
	for (auto & val : m_dna)
		val = DNA_RANDFUNC();
}

void Genome::mutate()
{
	for (auto & val : m_dna)
		if (randomNumber() < CONFIG_MUTATE_RATE)
			val = DNA_RANDFUNC();
}
