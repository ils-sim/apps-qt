#include <string>
#include <sstream>

using namespace std;

#include "Model.h"
#include "Point.h"

Point_t::Point_t(unsigned int _Latitude, unsigned int _Longitude)
	: Model_t(POINT), Latitude(_Latitude), Longitude(_Longitude)
{
}

Point_t::Point_t()
	: Model_t(POINT), Latitude(0.0), Longitude(0.0)
{
}

Point_t::~Point_t()
{
}

bool Point_t::isZerro() const
{
	return Latitude == 0.0 && Longitude == 0.0;
}

// cppcheck-suppress unusedFunction
void Point_t::setZerro()
{
	Latitude = 0.0;
	Longitude = 0.0;
}

string Point_t::ToString() const
{
	stringstream ss;
	ss << "[Point: Latitude=" << Latitude << ", Longitude=" << Longitude << "]";
	return ss.str();
}
