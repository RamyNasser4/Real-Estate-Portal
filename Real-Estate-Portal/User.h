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
	User();
	User(string firstName, string lastName, int nationalId, string password,string mobileNumber);
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

	int GetNationalId();
	void SetFirstName(string firstname);
	void SetLastName(string lastname);
	void SetNationalId(int nationalId);
	void SetPassword(string password);
	void SetMobileNumber(string mobileNumber);
	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, int currentUserId,System &system);
	
	virtual ~User();
};