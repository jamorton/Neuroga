#ifndef __GENOME_H__
#define __GENOME_H__

#incldue <vector>
#include "common.h"

class Genome
{
public:
	Genome();
	~Genome();
	
	inline std::vector<Number> * dna() { return &m_dna; }
	inline size_type size() const { return CONFIG_DNA_LEN; }
	inline Number get(size_type pos) { return m_dna[pos]; }
	
	void mutate();
	
private:
	std::vector<Number> m_dna;
};

#endif
