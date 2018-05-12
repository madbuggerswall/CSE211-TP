#ifndef RANDOMUTILITIES_H
#define RANDOMUTILITIES_H

#include <cstdlib>
#include <ctime>

class RandomUtilities {
	public:
		RandomUtilities();
		int randomInt(int min, int max);
		bool randomBool();
};
#endif
