#ifndef USER_H
#define USER_H

class User_t : public Model_t
{
public:
	unsigned int id;
	string Name;

	User_t(unsigned int _id, string & _Name);
	virtual ~User_t();

	virtual string ToString() const;
};

#endif // USER_H
