#include <string>
#include <sstream>

using namespace std;

#include "CarPosition.h"

CarPosition_t::CarPosition_t(Point_t _Position)
{
	Position = _Position;
}

string CarPosition_t::ToString()
{
	stringstream ss;
	ss << "[CarPosition: Position=" << Position.ToString() << "]";
	return ss.str();
}
