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
	queue<Property*> unVerified;

	//Hashtables for filter
	unordered_map<int, unordered_map<string, Property*>> propertyFilterSquareFootage;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterType;
	unordered_map<int, unordered_map<string, Property*>> propertyFilterBedRooms;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterLocations;
	map<int, unordered_map<string, Property*>> propertyFilterPrice;
	unordered_map<string, Property*> propertyComparison;
	unordered_map<string, Property*> properties;
	unordered_map<int, User*> GetUsers();
	unordered_map<string, Property*> GetProperties();

	//Filter functions 
	unordered_map<string, Property*> FilterBySquareFootage(int squareFootage);
	unordered_map<string, Property*> FilterByNumberOfBedrooms(int bedrooms);
	unordered_map<string, Property*>  FilterByLocation(string locations);
	unordered_map<string, Property*> FilterByPrice(int minPrice, int maxPrice);
	unordered_map<string, Property*>  FilterByType(string type);


	void Request(Property *property);
	void SignUp(string fName, string lName, int natId, string password,string mobileNumber);
	void Login(int ID, string password);
	void UserChangePassword(string currentPassword,string newPassword,User& user);
	void RemoveUser(int adminID,int userID,System &system);
	void AddToCompare(string propertyId);
	void RemoveFromCompare(string propertyId);
	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, int currentUserId, bool highlighted, string propertyDescription);
	void EditProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, int currentUserId, bool highlighted, string propertyDescription, string propertyId);
	void RemoveProperty(string propertyId, int currentUserId);
	void EditMobileNumber(int currentUserId, string mobileNumber);
	int UserCounter();
	int PropertiesCounter();
	
	
};

