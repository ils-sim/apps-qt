#ifndef STATIONTYPE_H
#define STATIONTYPE_H

class StationType_t
{
public:
	unsigned int id;
	string Name;

	StationType_t(unsigned int _id, string _Name);

	string ToString();
};

#endif // STATIONTYPE_H
