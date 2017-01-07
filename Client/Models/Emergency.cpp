#include <string>
#include <sstream>
#include <list>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "Emergency.h"

Emergency_t::Emergency_t(unsigned int _id, string _City, string _Street, unsigned int _StreetNumber, Point_t _Position,
			/*DateTime _CallTime, DateTime _EndTime,*/ boost::shared_ptr<ControlCenter_t> _pCenter)
{
	id = _id;
	City = _City;
	Street = _Street;
	StreetNumber = _StreetNumber;
	Position = _Position;
	pCenter = _pCenter;
}

string Emergency_t::ToString()
{
	stringstream ss;
	ss << "[CarStatus: id=" << id << ", City=" << City << ", Street=" << Street << ", StreetNumber="
	   << StreetNumber << ", Position=" << Position.ToString() << ", Center=" << pCenter->ToString() <<"]";
	return ss.str();
}
