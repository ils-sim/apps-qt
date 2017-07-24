#ifndef CARPOSITION_H
#define CARPOSITION_H

class CarPosition_t : public Model_t
{
public:
	// DateTime Time;
	Point_t Position;

	explicit CarPosition_t(Point_t & _Position);
	virtual ~CarPosition_t();

	virtual string ToString() const;
};

#endif // CARPOSITION_H
