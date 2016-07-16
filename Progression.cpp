#include "Progression.hpp"

//print n values
void Progression::printProgression(int n) {
	std::cout << firstValue(); //print the first val
	
	for (int i = 2; i <= n; i++) { //print 2 through n
		std::cout << ' ' << nextValue(); 
	}
	std::cout << std::endl;
}

long Progression::firstValue() {
	mCur = mFirst;
	return mCur;
}

long Progression::nextValue() {
	return ++mCur;
}