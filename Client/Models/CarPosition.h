#ifndef CARPOSITION_H
#define CARPOSITION_H

class CarPosition_t : public Model_t
{
public:
	// DateTime Time;
	Point_t Position;

	CarPosition_t(Point_t _Position);
	virtual ~CarPosition_t();

	string ToString();
};

#endif // CARPOSITION_H
