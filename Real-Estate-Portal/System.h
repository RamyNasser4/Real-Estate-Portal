#pragma once
#include <map>
#include <cstring>
#include "User.h"
using namespace std;
cla
	map<int, User> users;
public:
	void SignUp(User user);
	void Login(int ID, string password);
	
};

