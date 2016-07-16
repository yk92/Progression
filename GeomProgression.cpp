#include 'GeomProgression.hpp'

GeomProgression::GeomProgression(long b)
	: Progression(), base(b) { }

long GeomProgression::nextValue() {
	mCur *= mBase;
	return mCur;
}