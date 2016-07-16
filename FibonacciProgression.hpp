#ifndef FIBONACCI_PROGRESSION_H
#define FIBONACCI_PROGRESSION_H

#include "Progression.hpp"

class FibonacciProgression : public Progression {
	public:
		FibonacciProgression(long f = 0, long s = 1);
	protected:
		virtual long firstValue();
		virtual long nextValue();
	protected:
		long mSecond;
		long mPrev;
};

#endif