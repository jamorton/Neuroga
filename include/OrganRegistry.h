
#ifndef __ORGAN_REGISTRY_H__
#define __ORGAN_REGISTRY_H__

#include "common.h"
#include "Organ.h"

class OrganRegistry
{

public:
	inline static Organ * create(Number angle) {
		Organ * b = new BlinkOrgan;
		b->angle(angle);
		return b;
	}

};

#endif
