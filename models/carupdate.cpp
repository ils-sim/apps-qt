#include <string>
#include <sstream>
#include <list>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "carupdate.h"

CarUpdate_t::CarUpdate_t(/*DateTime LastUpdate,*/ boost::shared_ptr<CarStatus_t> _pStatus, Point_t _GoalPosition,
						 boost::shared_ptr<Emergency_t> _pEmergency, bool _BlueLight, bool _isServerStatus)
{
	pStatus = _pStatus;
	GoalPosition = _GoalPosition;
	pEmergency = _pEmergency;
	BlueLight = _BlueLight;
	isServerStatus = _isServerStatus;
}

string CarUpdate_t::ToString()
{
	stringstream ss;
	ss << "[CarUpdate: Status=" << pStatus->ToString() << ", GoalPosition=" << GoalPosition.ToString() << ", BlueLight=" << BlueLight << ", isServerStatus=" << isServerStatus << "]";
	return ss.str();
}
