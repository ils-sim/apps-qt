#ifndef STATION_H
#define STATION_H

class Station_t;

#include "point.h"
#include "stationtype.h"
#include "car.h"

class Station_t
{
public:
	unsigned int id;
	string Name;
	Point_t Position;
	boost::shared_ptr<StationType_t> pType;
	boost::shared_ptr<list<Car_t>> pCars;

	Station_t(unsigned int _id, string _Name, Point_t _Position, boost::shared_ptr<StationType_t> _pType, boost::shared_ptr<list<Car_t>> _pCars);
	string ToString();
};

#endif // STATION_H
