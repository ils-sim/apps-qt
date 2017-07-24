#ifndef STATIONTYPE_H
#define STATIONTYPE_H

class StationType_t : public Model_t
{
public:
	unsigned int id;
	string Name;

	StationType_t(unsigned int _id, string & _Name);
	virtual ~StationType_t();

	virtual string ToString() const;
};

#endif // STATIONTYPE_H
