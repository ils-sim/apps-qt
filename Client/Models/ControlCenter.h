#ifndef CONTROLCENTER_H
#define CONTROLCENTER_H

class ControlCenter_t : public Model_t
{
public:
	unsigned int id;
	string Name;
	boost::shared_ptr<list<Station_t>> pStations;

	ControlCenter_t(unsigned int _id, string _Name, boost::shared_ptr<list<Station_t>> _pStations);
	virtual ~ControlCenter_t();

	string ToString();
};

#endif // CONTROLCENTER_H
