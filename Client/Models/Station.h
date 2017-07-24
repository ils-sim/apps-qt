#ifndef STATION_H
#define STATION_H

class Station_t : public Model_t
{
public:
	unsigned int id;
	string Name;
	Point_t Position;
	boost::shared_ptr<StationType_t> pType;
	boost::shared_ptr<list<Car_t>> pCars;

	Station_t(unsigned int _id, string & _Name, Point_t & _Position, boost::shared_ptr<StationType_t> _pType,
			  boost::shared_ptr<list<Car_t>> _pCars);
	virtual ~Station_t();

	virtual string ToString() const;
};

#endif // STATION_H
