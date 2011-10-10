
#include "Genome.h"

#define DNA_RANDFUNC() (random())
#define dlen CONFIG_DNA_LEN

Genome::Genome() : m_dna(DLEN, 0.0)
{

}

Genome::randomize()
{
	for (int i = 0; i < DLEN; i++)
		m_dna[i] = DNA_RANDFUNC();	
}

Genome::mutate()
{
	for (int i = 0; i < DLEN; i++)
		if (random() < CONFIG_MUTATE_RATE)
			m_dna[i] = DNA_RANDFUNC();
}