#pragma once
#include <unordered_map>
#include <map>
#include <vector>
#include <string>
#include <queue>
#include "User.h"
#include "Admin.h"
#include "Property.h"
#include "EditPropertyRequest.h"
#include "EditUserRequest.h"
using namespace std;
class System{
public:
	unordered_map<string, User*> users;
	queue<Property*> unVerified;
	string currentUserId;
	string currentUserName;
	int propertiesCount = 0;
	int userCount = 0;
	//Hashtables for filter
	map<int, unordered_map<string, Property*>> propertyFilterSquareFootage;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterType;
	unordered_map<int, unordered_map<string, Property*>> propertyFilterBedRooms;
	unordered_map<string, unordered_map<string, Property*>> propertyFilterLocations;
	map<int, unordered_map<string, Property*>> propertyFilterPrice;
	map<int, User*> userFilterByPropertyCount;
	map<int, unordered_map<string, Property*>> propertyFilterComparison;
	vector<Property*> propertyComparison;
	unordered_map<string, Property*> properties;
	unordered_map<string, User*> GetUsers();
	unordered_map<string, Property*> GetProperties();
	queue<Property*> GetRequestedProperties();
	vector<Property*> GetPropertyComparison();
	map<int, unordered_map<string, Property*>> GetPropertyFilterSquareFootage();
	unordered_map<int, unordered_map<string, Property*>> GetpropertyFilterBedRooms();
	unordered_map<string, unordered_map<string, Property*>> GetPropertyFilterType();
	unordered_map<string, unordered_map<string, Property*>> GetPropertyFilterLocations();
	map<int, unordered_map<string, Property*>>GetPropertyFilterPrice();
	vector<EditUserRequest*> GetUserLogs();
	vector<EditPropertyRequest*> GetPropertyLogs();

	//Filter functions 
	map<int, unordered_map<string, Property*>> FilterBySquareFootage(int minSquareFootage,int maxSquareFootage);
	unordered_map<string, Property*> FilterByNumberOfBedrooms(int bedrooms);
	unordered_map<string, Property*>  FilterByLocation(string locations);
	map<int, unordered_map<string,Property*>> FilterByPrice(int minPrice, int maxPrice);
	unordered_map<string, Property*>  FilterByType(string type);
	void SortUserByPropertyCount(string nationalID,bool increment);
	void Request(Property *property);
	void SignUp(string fName, string lName, string natId, string password,string mobileNumber);
	void Login(string ID, string password);
	void Logout();
	void UserChangePassword(string currentPassword,string newPassword,User* user);
	void EditProfile(string fName, string lName, string mobNum, string currPass, string newPass);
	void RemoveUser(string adminID, string userID);
	void AddToCompare(string propertyId);
	void RemoveFromCompare(string propertyId);
	void ResetCompare();
	vector<Property*> GetTop3Compared();
	void handleComparison();
	void AddProperty(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription);
	void EditProperty(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription, string propertyId);
	void RemoveProperty(string propertyId, string currentUserId);
	void AddUserLog(EditUserRequest* editUserRequest);
	void AddPropertyLog(EditPropertyRequest* editPropertyRequest);
	void ReadProperty(string propertyId, string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription);
	void ReadProperty(string propertyId, string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, bool highlighted, string propertyDescription, int compareCounter);
	void EditMobileNumber(string currentUserId, string mobileNumber);
	void AddAdmin(string firstName, string lastName, string nationalId, string password,string mobileNumber);
	int UserCounter();
	int PropertiesCounter();
	bool FindUser(string nationalid);
	Property* GetProperty(string propertyId);
	User* GetUser(string userId);
	User* UserWithMostProperties();
	vector<EditPropertyRequest*>EditPropertyLogs;
	vector<EditUserRequest*>EditUserLogs;

};

