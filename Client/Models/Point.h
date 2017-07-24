#ifndef POINT_H
#define POINT_H

class Point_t : public Model_t
{
public:
	double Latitude;
	double Longitude;

	Point_t(unsigned int _Latitude, unsigned int _Longitude);
	Point_t();

	virtual ~Point_t();

	bool isZerro() const;
	void setZerro();

	virtual string ToString() const;
};

#endif // POINT_H
