#ifndef USER_H
#define USER_H

class User_t
{
public:
	unsigned int id;
	string Name;

	User_t(unsigned int _id, string _Name);

	string ToString();
};

#endif // USER_H
