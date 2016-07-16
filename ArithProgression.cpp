#include 'ArithProgression.hpp'

//constructor must instantiate Progression class first 
ArithProgression::ArithProgression(long i)
	: Progression(), inc(i) { }

//polymorphic version of nextValue()
long ArithProgression::nextValue() { 
	mCur += mInc;
	return mCur;
}