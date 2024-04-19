#pragma once
#include <string>
using namespace std;
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
	int GetNationalId();

	void SetFirstName(string firstname);
	void SetLastName(string lastname);
	void SetNationalId(int nationalId);
	void SetPassword(string password);
	void SetMobileNumber(string mobileNumber);

	virtual ~User();
};