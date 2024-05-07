#pragma once
#include <ctime>
#include <iostream>
#include"User.h"
using namespace std;
class EditUser
{
	User oldUser;
	User newUser;
	time_t timeStamp;
	EditUser(User oldUser, User newUser, time_t time);
	EditUser(User oldUser, User newUser);
	EditUser(User oldUser);
	EditUser();


};

