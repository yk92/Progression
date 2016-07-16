#include "GeomProgression.hpp"

GeomProgression::GeomProgression(long b)
	: Progression(1), mBase(b) { }

long GeomProgression::nextValue() {
	mCur *= mBase;
	return mCur;
}