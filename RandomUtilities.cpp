#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class RandomUtilities{
	public:
		static int randomInt(int min, int max);
};

int RandomUtilities::randomInt(int min, int max){
	srand(time(nullptr));
	int randomValue = rand() % (max+1) + min;
}

int main(){
	for(int i = 0; i < 20; i++){
		srand(time(nullptr));
		cout << RandomUtilities::randomInt(1, 4) << endl;	 
	}
}
