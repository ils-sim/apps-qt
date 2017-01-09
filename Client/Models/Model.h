#ifndef MODEL_H_
#define MODEL_H_

#include <string>
#include <sstream>
#include <list>

using namespace std;

#include <boost/shared_ptr.hpp>


class Model_t
{
public:
	enum Model_Type_t
	{
		CAR,
		CAR_POSITION,
		CAR_STATUS,
		CAR_TYPE,
		CAR_UPDATE,
		CONTROL_CENTER,
		EMERGENCY,
		POINT,
		STATION,
		STATION_TYPE,
		USER,
	};

	static string Type2String(Model_Type_t type)
	{
		switch(type)
		{
		case CAR:
			return "CAR";
		case CAR_POSITION:
			return "CAR_POSITION";
		case CAR_STATUS:
			return "CAR_STATUS";
		case CAR_TYPE:
			return "CAR_TYPE";
		case CAR_UPDATE:
			return "CAR_UPDATE";
		case CONTROL_CENTER:
			return "CONTROL_CENTER";
		case EMERGENCY:
			return "EMERGENCY";
		case POINT:
			return "POINT";
		case STATION:
			return "STATION";
		case STATION_TYPE:
			return "STATION_TYPE";
		case USER:
			return "USER";
		}
		return "";
	}

	explicit Model_t(Model_Type_t type)
		: mType(type)
	{
	}

	Model_Type_t GetType() const
	{
		return mType;
	}

	virtual string Package2String() const
	{
		return "Type: " + Type2String(GetType());
	}

	virtual ~Model_t()
	{

	}

private:
	Model_Type_t mType;
};

// could not resolve this forward declaration, but it is working
class Car_t;

#include "Point.h"
#include "CarPosition.h"
#include "CarStatus.h"
#include "CarType.h"
#include "StationType.h"
#include "Station.h"
#include "ControlCenter.h"
#include "Emergency.h"
#include "CarUpdate.h"
#include "Car.h"
#include "User.h"

#endif
