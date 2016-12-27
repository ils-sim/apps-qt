#include <string>
#include <sstream>
#include <list>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "car.h"

Car_t::Car_t(unsigned int _id, string _Callsign, boost::shared_ptr<Station_t> _pStation, boost::shared_ptr<CarType_t> _pType)
{
	id = _id;
	Callsign = _Callsign;
	pHomeStation = _pStation;
	pType = _pType;
}

string Car_t::ToString()
{
	stringstream ss;
	ss << "[Car: id=" << id << ", Callsign=" << Callsign << ", Station=" << pHomeStation->ToString() << ", Type=" << pType->ToString();
	if(pLastUpdate != 0)
	{
		ss << ", LastUpdate=" << pLastUpdate;
	}
	ss << "]";
	return ss.str();
}
