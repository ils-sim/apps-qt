#include <string>
#include <sstream>

using namespace std;

#include "StationType.h"

StationType_t::StationType_t(unsigned int _id, string _Name)
{
	id = _id;
	Name = _Name;
}

string StationType_t::ToString()
{
	stringstream ss;
	ss << "[StationType: id=" << id << ", Name=" << Name << "]";
	return ss.str();
}
