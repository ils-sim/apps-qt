#include <string>
#include <sstream>

using namespace std;

#include "CarType.h"

CarType_t::CarType_t(unsigned int _id, string _Name, string _ShortName)
{
	id = _id;
	Name = _Name;
	ShortName = _ShortName;
}

string CarType_t::ToString()
{
	stringstream ss;
	ss << "[CarType: id=" << id << ", Name=" << Name << ", SortName=" << ShortName << "]";
	return ss.str();
}
