#ifndef GEOM_PROGRESSION_H
#define GEOM_PROGRESSION_H

#include "Progression.hpp"

class GeomProgression : public Progression {
	public:
		GeomProgression(long b = 2);
	protected:
		virtual long nextValue();
	protected:
		long mBase;
};

#endif