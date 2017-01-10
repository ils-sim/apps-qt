#ifndef CARTYPE_H
#define CARTYPE_H

class CarType_t : public Model_t
{
public:
	unsigned int id;
	string Name;
	string ShortName;

	CarType_t(unsigned int _id, string & _Name, string & _ShortName);
	virtual ~CarType_t();

	string ToString() const;
};

#endif // CARTYPE_H
