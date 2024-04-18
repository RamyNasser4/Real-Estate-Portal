#pragma once
#include <unordered_map>
#include <string>
#include "User.h"
using namespace std;
class System{
	unordered_map<int, User*> users;
public:
	void SignUp(string fName, string lName, int natId, string password);
	void Login(int ID, string password);
	void RemoveUser(int adminID,int ID);
};

