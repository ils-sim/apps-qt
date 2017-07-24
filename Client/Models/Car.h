#ifndef CAR_H
#define CAR_H

class Car_t : public Model_t
{
public:
	unsigned int id;
	string Callsign;
	boost::shared_ptr<Station_t> pHomeStation;
	boost::shared_ptr<CarType_t> pType;
	boost::shared_ptr<CarUpdate_t> pLastUpdate;

	Car_t(unsigned int _id, string & _Callsign, boost::shared_ptr<Station_t> _pStation, boost::shared_ptr<CarType_t> _pType);
	virtual ~Car_t();
	virtual string ToString() const;
};

#endif // CAR_H
