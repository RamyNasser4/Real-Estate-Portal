#pragma once
#include <map>
#include "User.cpp"
using namespace std;
class System
{
	map<int, User> users;
public:
	void SignUp(User user) {
		/*if (users.find(user.id) == users.end()) {
			users[user.id] = new User(user);
		}
		else {
			cout << "User already exists" << endl;
		}*/
	}
};

