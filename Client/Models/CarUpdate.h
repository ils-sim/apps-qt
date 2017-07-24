#ifndef CARUPDATE_H
#define CARUPDATE_H

class CarUpdate_t : Model_t
{
public:
	//DateTime LastUpdate;
	boost::shared_ptr<CarStatus_t> pStatus;
	Point_t GoalPosition;
	boost::shared_ptr<Emergency_t> pEmergency;
	bool BlueLight;
	bool isServerStatus;

	CarUpdate_t(/*DateTime _LastUpdate,*/ boost::shared_ptr<CarStatus_t> _pStatus, Point_t & _GoalPosition,
				boost::shared_ptr<Emergency_t> _pEmergency, bool _BlueLight, bool _isServerStatus);

	virtual ~CarUpdate_t();

	virtual string ToString() const;
};

#endif // CARUPDATE_H
