#include "RandomUtilities.h"
RandomUtilities::RandomUtilities(){
	std::srand(time(NULL));
}

int RandomUtilities::randomInt(int min, int max){
	return std::rand() % (max+1) + min;
}

bool RandomUtilities::randomBool(){
	return randomInt(0,1);
}
