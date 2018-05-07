#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class RandomUtilities{
	public:
		RandomUtilities();
		int randomInt(int min, int max);
		bool randomBool();
};

RandomUtilities::RandomUtilities(){
	srand(time(NULL));
}

int RandomUtilities::randomInt(int min, int max){
	return rand() % (max+1) + min;
}

bool RandomUtilities::randomBool(){
	return randomInt(0,1);
}

