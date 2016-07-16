#include "GeomProgression.hpp"

GeomProgression::GeomProgression(long b)
	: Progression(), mBase(b) { }

long GeomProgression::nextValue() {
	mCur *= mBase;
	return mCur;
}