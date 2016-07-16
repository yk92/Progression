#include 'FibonacciProgression.hpp'

FibonacciProgression::FibonacciProgression(long f, long s)
	: Progression(f), second(s), prev(second - first) { }

long FibonacciProgression::firstValue() {
	mCur = mFirst;
	mPrev = mSecond - mFirst;
	return mCur;
}

long FibonacciProgression::nextValue() {
	long temp = mPrev;
	mPrev = mCur;
	mCur += temp;
	return mCur;
}