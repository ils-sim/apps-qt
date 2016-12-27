#ifndef CARPOSITION_H
#define CARPOSITION_H

class CarPosition_t;

#include "point.h"

class CarPosition_t
{
public:
	// DateTime Time;
	Point_t Position;

	CarPosition_t(Point_t _Position);

	string ToString();
};

#endif // CARPOSITION_H
