#include <string>
#include <sstream>

using namespace std;

#include "user.h"

User_t::User_t(unsigned int _id, string _Name)
{
	id = _id;
	Name = _Name;
}

string User_t::ToString()
{
	stringstream ss;
	ss << "[User: id=" << id << ", Name=" << Name << "]";
	return ss.str();
}
