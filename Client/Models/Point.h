#ifndef POINT_H
#define POINT_H

class Point_t
{
public:
	double Latitude;
	double Longitude;

	Point_t(unsigned int _Latitude, unsigned int _Longitude);
	Point_t();

	bool isZerro();
	void setZerro();

	string ToString();
};

#endif // POINT_H
