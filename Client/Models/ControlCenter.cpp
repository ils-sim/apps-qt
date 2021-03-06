#include <string>
#include <sstream>
#include <list>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "Model.h"
#include "ControlCenter.h"

ControlCenter_t::ControlCenter_t(unsigned int _id, string & _Name, boost::shared_ptr<list<Station_t>> _pStations)
	: Model_t(CONTROL_CENTER), id(_id), Name(_Name), pStations(_pStations)
{
}

ControlCenter_t::~ControlCenter_t()
{
}

string ControlCenter_t::ToString() const
{
	stringstream ss;
	ss << "[ControlCenter: id=" << id << ", Name=" << Name << ", Station=[";
	for(list<Station_t>::iterator iter = pStations->begin(); iter != pStations->end(); ++iter)
	{
		ss << iter->ToString() << ", ";
	}
	ss << "]";
	return ss.str();
}
