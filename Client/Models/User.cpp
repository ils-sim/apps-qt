#include <string>
#include <sstream>

using namespace std;

#include "Model.h"
#include "User.h"

User_t::User_t(unsigned int _id, string & _Name)
	: Model_t(USER), id(_id), Name(_Name)
{
}

User_t::~User_t()
{
}

string User_t::ToString() const
{
	stringstream ss;
	ss << "[User: id=" << id << ", Name=" << Name << "]";
	return ss.str();
}
