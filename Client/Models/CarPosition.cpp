#include <string>
#include <sstream>

using namespace std;

#include "Model.h"
#include "CarPosition.h"

CarPosition_t::CarPosition_t(Point_t _Position)
	: Model_t(CAR_POSITION)
{
	Position = _Position;
}

CarPosition_t::~CarPosition_t()
{
}

string CarPosition_t::ToString()
{
	stringstream ss;
	ss << "[CarPosition: Position=" << Position.ToString() << "]";
	return ss.str();
}
