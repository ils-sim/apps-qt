#include <string>
#include <sstream>

using namespace std;

#include "point.h"

Point_t::Point_t(unsigned int _Latitude, unsigned int _Longitude)
{
	Latitude = _Latitude;
	Longitude = _Longitude;
}

Point_t::Point_t()
{
	Latitude = 0.0;
	Longitude = 0.0;
}

bool Point_t::isZerro()
{
	return Latitude == 0.0 && Longitude == 0.0;
}

void Point_t::setZerro()
{
	Latitude = 0.0;
	Longitude = 0.0;
}

string Point_t::ToString()
{
	stringstream ss;
	ss << "[Point: Latitude=" << Latitude << ", Longitude=" << Longitude << "]";
	return ss.str();
}
