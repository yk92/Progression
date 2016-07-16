#include "FibonacciProgression.hpp"

FibonacciProgression::FibonacciProgression(long f, long s)
	: Progression(f), mSecond(s), mPrev(mSecond - mFirst) { }

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