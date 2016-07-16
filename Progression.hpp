#ifndef PROGRESSION_H
#define PROGRESSION_H

#include <iostream>

class Progression {
	public:
		Progression(long f = 0)
			: mFirst(f), mCur(f) { }
		virtual ~Progression() { };
		void printProgression(int n);
	protected:
		virtual long firstValue();
		virtual long nextValue();
	protected:
		long mFirst;
		long mCur;
};

#endif