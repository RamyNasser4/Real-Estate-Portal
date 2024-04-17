#pragma once
#include <string>
using namespace std;
//Add setters and getters for passwrod user to be passed as parameter
class User
{
private:
	string password;

protected:
	string firstName;
	string lastName;
	int nationalId;

public:
	User();
	User(string firstName, string lastName, int nationalId, string password);
	User(string firstName, string lastName, int nationalId);
	User(string firstName, string lastName);
	User(int nationalId, string password);
	User(string firstName);
	User(const User& other);

	string GetFirstName();
	void SetFirstName(string firstname);
	string GetLastName();
	void SetLastName(string lastname);
	string GetNationalId();
	void SetNationalId(int nationalId);

};