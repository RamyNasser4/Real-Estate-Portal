#pragma once
#include <unordered_map>
#include <string>
#include "User.h"
#include "Property.h"
#include "RBT.h"
#include <vector>
#include <queue>
using namespace std;
class System{
	unordered_map<int, User*> users;
	RBT propertyFilterPrice;
	
public:
	queue<Property> unVerified;
	void Request(Property property);
	unordered_map<int, unordered_map<string, Property*>> propertyFilterSquareFootage;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterType;
	unordered_map<int, unordered_map<string, Property*>> propertyFilterBedRooms;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterLocations;
	unordered_map<string, Property*> properties;
	void SignUp(string fName, string lName, int natId, string password);
	void Login(int ID, string password);
	void RemoveUser(int adminID,int ID);
	unordered_map<string, Property*> FilterBySquareFootage(int squareFootage);
	unordered_map<string, Property*>  FilterByLocation(string locations);
	unordered_map<string, Property*>  FilterByType(string types);

	map<int, Property*> FilterByPrice(int minPrice, int maxPrice);
};

