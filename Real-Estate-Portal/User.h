#pragma once
#include <string>
using namespace std;
class User
{
protected:
	string firstName;
	string lastName;
	string nationality;

public:
	User();
	User(string firstName , string lastName, string nationality);
	User(const User& other);
	User(string firstName, string lastName);
	User(string firstName);

	string getFirstName();
	void SetFirstName(string firstname);	
	string getLastName();
	void SetLastName(string lastname);
	string getNationality();
	void SetNationality(string Nationality);
	
};

