#include <string>
#include <sstream>
#include <list>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "Model.h"
#include "CarUpdate.h"

CarUpdate_t::CarUpdate_t(/*DateTime LastUpdate,*/ boost::shared_ptr<CarStatus_t> _pStatus, Point_t _GoalPosition,
						 boost::shared_ptr<Emergency_t> _pEmergency, bool _BlueLight, bool _isServerStatus)
	: Model_t(CAR_UPDATE)
{
	pStatus = _pStatus;
	GoalPosition = _GoalPosition;
	pEmergency = _pEmergency;
	BlueLight = _BlueLight;
	isServerStatus = _isServerStatus;
}

CarUpdate_t::~CarUpdate_t()
{
}

string CarUpdate_t::ToString()
{
	stringstream ss;
	ss << "[CarUpdate: Status=" << pStatus->ToString() << ", GoalPosition=" << GoalPosition.ToString() << ", BlueLight=" << BlueLight << ", isServerStatus=" << isServerStatus << "]";
	return ss.str();
}
