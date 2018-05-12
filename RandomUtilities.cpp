#include "RandomUtilities.h"
RandomUtilities::RandomUtilities(){
	std::srand(time(NULL));
}

int RandomUtilities::randomInt(int min, int max){
	int result = std::rand() % (max-min+1) + min;
	return result;
}

bool RandomUtilities::randomBool(){
	return randomInt(0,1);
}
