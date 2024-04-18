#pragma once
#include <map>
#include <string>
#include "User.h"
using namespace std;
class System{
	map<int, User*> users;
public:
	void SignUp(string fName, string lName, int natId, string password);
	void Login(int ID, string password);
	void RemoveUser(int ID);
};

