#include <string>
#include <sstream>

using namespace std;

#include "Model.h"
#include "CarType.h"

CarType_t::CarType_t(unsigned int _id, string & _Name, string & _ShortName)
	: Model_t(CAR_TYPE), id(_id), Name(_Name), ShortName(_ShortName)
{
}

CarType_t::~CarType_t()
{
}

string CarType_t::ToString() const
{
	stringstream ss;
	ss << "[CarType: id=" << id << ", Name=" << Name << ", SortName=" << ShortName << "]";
	return ss.str();
}
