#pragma once
#include <string>
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


public:
	unordered_map<int, unordered_map<string, Property*>>userProperties;

	User();
	User(string firstName, string lastName, int nationalId, string password, string mobileNumber);
	User(string firstName, string lastName, int nationalId, string password);
	User(string firstName, string lastName, int nationalId);
	User(string firstName, string lastName);
	User(string firstName);
	User(const User& other);

	string GetFirstName();
	string GetLastName();
	string GetName();
	string GetPassword();
	string GetMobileNumber();
	string GeneratePropertyId();

	unordered_map<string, Property*>GetUserProperties(int UserID);
	int GetNationalId();
	void SetFirstName(string firstname);
	void SetLastName(string lastname);
	void SetNationalId(int nationalId);
	void SetPassword(string password);
	void SetMobileNumber(string mobileNumber);
	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, int currentUserId, System& system);
	void UserProperties(int UserId);
	virtual ~User();


};