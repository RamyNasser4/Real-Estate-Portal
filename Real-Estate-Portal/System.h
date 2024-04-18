#pragma once
#include <unordered_map>
#include <string>
#include "User.h"
#include "Property.h"
using namespace std;
class System{
	unordered_map<int, User*> users;
	unordered_map<int, unordered_map<string, Property*>> propertyFilterSquareFootage;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterType;
	unordered_map<int, unordered_map<string, Property*>> propertyFilterBedRooms;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterLocations;
public:
	void SignUp(string fName, string lName, int natId, string password);
	void Login(int ID, string password);
	void RemoveUser(int adminID,int ID);
	unordered_map<int, unordered_map<string, Property*>> FilterBySquareFootage(unordered_map<int, unordered_map<string, Property*>> FilterSquareFootage, int squareFootage);
	unordered_map<string, unordered_map<string, Property*>> FilterByLocation(unordered_map<string, unordered_map<string, Property*>> FilterLocations,string locations);
};

