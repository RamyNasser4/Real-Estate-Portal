#include "EditUser.h"
#include <ctime>
#include <iostream>
#include"User.h"
using namespace std;
EditUser::EditUser(User oldUser, User newUser, time_t timeStamp) {
	this->oldUser = oldUser;
	this->newUser = newUser;
	this->timeStamp = timeStamp;
}
EditUser::EditUser(User oldUser, User newUser) {
	EditUser(oldUser, newUser, NULL);
}
EditUser::EditUser(User oldUser) {
	EditUser(oldUser,newUser);
}
EditUser::EditUser() {
	EditUser(oldUser);
}
