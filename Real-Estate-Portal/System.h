#pragma once
#include <unordered_map>
#include <map>
#include <string>
#include <queue>
#include "User.h"
#include "Property.h"
using namespace std;
class System{
public:
	unordered_map<int, User*> users;
	queue<Property> unVerified;
	
	unordered_map<int, unordered_map<string, Property*>> propertyFilterSquareFootage;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterType;
	unordered_map<int, unordered_map<string, Property*>> propertyFilterBedRooms;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterLocations;
	map<int, unordered_map<string, Property*>> propertyFilterPrice;

	unordered_map<string, Property*> properties;
	unordered_map<int, User*> GetUsers();
	void Request(Property property);
	void SignUp(string fName, string lName, int natId, string password,string mobileNumber);
	void Login(int ID, string password);
	void UserChangePassword(string currentPassword,string newPassword,int nationalId);
	void RemoveUser(int adminID,int ID);
	int UserCounter();
	unordered_map<string, Property*> FilterBySquareFootage(int squareFootage);
	unordered_map<string, Property*> FilterByNumberOfBedrooms(int bedrooms);
	unordered_map<string, Property*>  FilterByLocation(string locations);
	unordered_map<string, Property*> FilterByPrice(int minPrice, int maxPrice);
	unordered_map<string, Property*>  FilterByType(string type);
	
	
};

