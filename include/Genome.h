#ifndef __GENOME_H__
#define __GENOME_H__

#include "common.h"

class Genome
{
public:
	Genome();
	Genome(std::vector<Number>& dna) : m_dna(dna) {}
	~Genome();

	inline const std::vector<Number>& dna() const { return m_dna; }
	inline uint size() const { return CONFIG_DNA_LEN; }
	inline Number at(uint pos) const { return m_dna[pos]; }

	void mutate();

private:
	std::vector<Number> m_dna;
};

#endif
