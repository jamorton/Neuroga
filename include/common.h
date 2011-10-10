#ifndef __COMMON_H__
#define __COMMON_H__

#include <cmath>
#include "common.h"

typedef float Number;

//returns a random integer between x and y
inline int randomInt(int x,int y)
{
	return (rand() % (y - x + 1)) + x;
}

//returns a random float between zero and 1
inline Number random()
{
	return rand() / (RAND_MAX + 1.0);
}

inline bool randomBool()
{
	if (rand() & 1)
		return true;
	return false;
}

#endif