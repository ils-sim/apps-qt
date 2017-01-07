#include <string>
#include <sstream>

using namespace std;

#include "CarStatus.h"

CarStatus_t::CarStatus_t(unsigned int _id, string _Name, bool _isSystemStatus)
{
	id = _id;
	Name = _Name;
	isSystemStatus = _isSystemStatus;
}

string CarStatus_t::ToString()
{
	stringstream ss;
	ss << "[CarStatus: id=" << id << ", Name=" << Name << ", isSystemStatus=" << isSystemStatus << "]";
	return ss.str();
}
