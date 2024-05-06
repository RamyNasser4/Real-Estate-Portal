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
	string nationalId;


	unordered_map<string, Property*> properties;
public:
	User();
	User(string firstName, string lastName, string nationalId, string password, string mobileNumber);
	User(string firstName, string lastName, string nationalId, string password);
	User(string firstName, string lastName, string nationalId);
	User(string firstName, string lastName);
	User(string firstName);
	User(const User& other);
	string GetNationalId();
	string GetFirstName();
	string GetLastName();
	string GetName();
	string GetPassword();
	string GetMobileNumber();
	unordered_map<string, Property*>GetUserProperties();
	
	void SetFirstName(string firstname);
	void SetLastName(string lastname);
	void SetNationalId(string nationalId);
	void SetPassword(string password);
	void SetMobileNumber(string mobileNumber);
	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription, System& system);
	void UserAddedProperty(string propertyId, Property* property);
	void UserEditProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string propertyDescription, System& system, string editPropertyId);
	void RemoveProperty(string propertyid, System& system);
	bool HasProperty(string propertyId);
	virtual ~User();


};