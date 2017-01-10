#ifndef CARSTATUS_H
#define CARSTATUS_H

class CarStatus_t : public Model_t
{
public:
	unsigned int id;
	string Name;
	bool isSystemStatus;

	CarStatus_t(unsigned int _id, string & _Name, bool _isSystemStatus);
	virtual ~CarStatus_t();

	string ToString() const;
};

#endif // CARSTATUS_H
