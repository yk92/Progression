#ifndef ARITH_PROGRESSION_H
#define ARITH_PROGRESSION_H


class ArithProgression : public Progression {
	public:
		ArithProgression(long i = 1);
	protected:
		virtual long nextValue(); //advance
	protected:
		long mInc; //increment
};

#endif