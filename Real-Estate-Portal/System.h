#pragma once
#include <unordered_map>
#include <string>
#include "User.h"
#include "Property.h"
using namespace std;
class System{
	unordered_map<int, User*> users;
public:
	static unordered_map<int, unordered_map<string, Property*>> propertyFilterSquareFootage;
	static unordered_map<string, unordered_map<string, Property*>> propertyFilterType;
	static unordered_map<int, unordered_map<string, Property*>> propertyFilterBedRooms;
	static unordered_map<string, unordered_map<string, Property*>> propertyFilterLocations;
	void SignUp(string fName, string lName, int natId, string password);
	void Login(int ID, string password);
	void RemoveUser(int adminID,int ID);
};

