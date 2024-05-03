#pragma once
#include <string>
#include <unordered_map>
#include "Property.h"
using namespace std;
class System;
class User
{

protected:
	string firstName;
	string lastName;
	string password;
	string mobileNumber;
	int nationalId;


	unordered_map<string, Property*> properties;
public:
	User();
	User(string firstName, string lastName, int nationalId, string password, string mobileNumber);
	User(string firstName, string lastName, int nationalId, string password);
	User(string firstName, string lastName, int nationalId);
	User(string firstName, string lastName);
	User(string firstName);
	User(const User& other);

	int GetNationalId();
	string GetFirstName();
	string GetLastName();
	string GetName();
	string GetPassword();
	string GetMobileNumber();
	unordered_map<string, Property*>GetUserProperties();
	
	void SetFirstName(string firstname);
	void SetLastName(string lastname);
	void SetNationalId(int nationalId);
	void SetPassword(string password);
	void SetMobileNumber(string mobileNumber);
	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, int currentUserId, bool highlighted, string propertyDescription, System& system);
	void UserAddedProperty(string propertyId, Property* property);
	void UserEditProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string propertyDescription, System& system, string editPropertyId);
	void RemoveProperty(string propertyid, System& system);
	virtual ~User();


};