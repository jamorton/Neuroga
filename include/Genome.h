#ifndef __GENOME_H__
#define __GENOME_H__

#include "common.h"

class Genome
{
public:
	Genome()                         : m_dna(CONFIG_DNA_LEN, 0.0) {}
	Genome(const Genome& other)      : m_dna(other.dna()) {}
	Genome(std::vector<Number>& dna) : m_dna(dna) {}
	~Genome() {}

	inline const std::vector<Number>& dna() const { return m_dna; }
	inline uint size() const { return CONFIG_DNA_LEN; }
	inline Number at(uint pos) const { return m_dna[pos]; }
	inline void set(uint pos, Number d) { m_dna[pos] = d; }

	void randomize();
	void mutate();
	static std::pair<Genome *, Genome *> crossover(Genome * dad, Genome * mom);

private:
	std::vector<Number> m_dna;
};

#endif
