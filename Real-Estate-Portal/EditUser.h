#pragma once
#include <ctime>
#include <iostream>
#include"User.h"
using namespace std;
class EditUser
{
	string oldFirstName;
	string newFirstName;
	string oldLastName;
	string newLastName;
	string oldMobileNumber;
	string newMobileNumber;
	bool password;
	time_t timeStamp;
	EditUser(string oldFirstName,string newFirstName,string oldLastName,string newLastName,string oldMobileNumber,string newMobileNumber,bool password,time_t timestamp);


};

