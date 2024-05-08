#include "EditUser.h"
#include <ctime>
#include <iostream>
#include"User.h"
using namespace std;
EditUser::EditUser(string oldFirstName, string newFirstName, string oldLastName, string newLastName, string oldMobileNumber, string newMobileNumber, bool password, time_t timestamp) {
	this->oldFirstName = oldFirstName;
	this->newFirstName = newFirstName;
	this->oldLastName = oldLastName;
	this->newLastName = newLastName;
	this->oldMobileNumber = oldMobileNumber;
	this->newMobileNumber = newMobileNumber;
	this->password = password;
	this->timeStamp = timestamp;
}
