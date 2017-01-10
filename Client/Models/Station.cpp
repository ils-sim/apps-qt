#include <string>
#include <sstream>
#include <list>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "Model.h"
#include "Station.h"

Station_t::Station_t(unsigned int _id, string & _Name, Point_t & _Position, boost::shared_ptr<StationType_t> _pType,
					 boost::shared_ptr<list<Car_t>> _pCars)
	: Model_t(STATION), id(_id), Name(_Name), Position(_Position), pType(_pType), pCars(_pCars)
{
}

Station_t::~Station_t()
{
}

string Station_t::ToString() const
{
	stringstream ss;
	ss << "[Station: id=" << id << ", Name=" << Name << ", Position=" << Position.ToString() << ", Type=" << pType->ToString() << ", Cars=[";
	for(list<Car_t>::iterator iter = pCars->begin(); iter != pCars->end(); ++iter)
	{
		ss << iter->ToString() << ", ";
	}
	ss << "]";
	return ss.str();
}
