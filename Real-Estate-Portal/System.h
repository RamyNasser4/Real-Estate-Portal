#pragma once
#include <map>
#include "User.h"
using namespace std;
class System
{
	map<int, User> users;
public:
	void SignUp(User user);
};

