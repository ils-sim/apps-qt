#ifndef CARTYPE_H
#define CARTYPE_H

class CarType_t
{
public:
	unsigned int id;
	string Name;
	string ShortName;

	CarType_t(unsigned int _id, string _Name, string _ShortName);

	string ToString();
};

#endif // CARTYPE_H
