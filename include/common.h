#ifndef __COMMON_H__
#define __COMMON_H__

#include <cmath>
#include <cstdlib>
#include <vector>
#include <ctime>
#include "config.h"

typedef float Number;
typedef unsigned int uint;

static void initRandom()
{
	srand(time(NULL));
}

//returns a random integer between x and y
inline int randomInt(int x,int y)
{
	return (rand() % (y - x + 1)) + x;
}

//returns a random float between zero and 1
inline Number randomNumber()
{
	return rand() / (RAND_MAX + 1.0);
}

inline bool randomBool()
{
	return rand() & 1;
}


#endif
