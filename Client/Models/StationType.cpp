#include <string>
#include <sstream>

using namespace std;

#include "Model.h"
#include "StationType.h"

StationType_t::StationType_t(unsigned int _id, string & _Name)
	: Model_t(STATION_TYPE), id(_id), Name(_Name)
{
}

StationType_t::~StationType_t()
{
}

string StationType_t::ToString() const
{
	stringstream ss;
	ss << "[StationType: id=" << id << ", Name=" << Name << "]";
	return ss.str();
}
