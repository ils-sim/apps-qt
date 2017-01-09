#ifndef EMERGENCY_H
#define EMERGENCY_H

class Emergency_t : public Model_t
{
public:
	unsigned int id;
	string City;
	string Street;
	unsigned int StreetNumber;
	Point_t Position;
	//DateTime CallTime;
	boost::shared_ptr<ControlCenter_t> pCenter;
	//DateTime EndTime;

	Emergency_t(unsigned int _id, string _City, string _Street, unsigned int _StreetNumber, Point_t _Position,
				/*DateTime _CallTime, DateTime _EndTime,*/ boost::shared_ptr<ControlCenter_t> _pCenter);
	virtual ~Emergency_t();

	string ToString();
};

#endif // EMERGENCY_H
