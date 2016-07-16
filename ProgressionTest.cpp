#include "Progression.hpp"
#include "ArithProgression.hpp"
#include "GeomProgression.hpp"
#include "FibonacciProgression.hpp"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	
	Progression* prog; //pointer of type Progression
	
	//test Arithmetic Progression classes
	cout << "Arithmetic Progression with default increment:\n";
	prog = new ArithProgression();
	prog->printProgression(10);
	cout << "Arithmetic Progression with increment of 5:\n";
	prog = new ArithProgression(5);
	prog->printProgression(10);
	
	//test Geometric Progression classes
	cout << "Geometric Progression with default base: \n";
	prog = new GeomProgression();
	prog->printProgression(10);
	cout << "Geometric Progression with base 3: \n";
	prog = new GeomProgression(3);
	prog->printProgression(10);
	
	//test Fibonacci Progression classes
	cout << "Fibonacci Progression with default start values:\n";
	prog = new FibonacciProgression();
	prog->printProgression(10);
	cout << "Fibonacci Progression with start values 4 and 6:\n";
	prog = new FibonacciProgression(4, 6);
	prog->printProgression(10);
	
	return 0;
}