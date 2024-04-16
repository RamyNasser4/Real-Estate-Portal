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
};

