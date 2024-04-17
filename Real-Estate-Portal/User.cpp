#include "User.h"
#include<iostream>
using namespace std;
User::User() {
	firstName = "noName";
	lastName = "noName";
	nationalId = 0;
}
User::User(string fName, string lName, int natId, string pass) {
	firstName = fName;
	lastName = lName;
	nationalId = natId;
	password = pass;
}
User::User(string fName, string lName, int natId) {
	firstName = fName;
	lastName = lName;
	nationalId = natId;
}
User::User(string fName, string lName) {
	firstName = fName;
	lastName = lName;
	nationalId = 0;
}
User::User(int natId, string pass) {
	nationalId = natId;
	password = pass;
}
User::User(string fName) {
	firstName = fName;
	lastName = "noName";
	nationalId = 0;
}
User::User(const User& other) {
	this->firstName = other.firstName;
	this->lastName = other.lastName;
	this->nationalId = other.nationalId;
	this->password = other.password;
}


string User::GetFirstName() {
	return this->firstName;
}
string User::GetLastName() {
	return this->lastName;
}
string User::GetNationalId() {
	return this->nationalId;
}
void User::SetFirstName(string firstname) {
	this->firstName = firstname;
}
void User::SetLastName(string lastname) {
	this->lastName = lastname;
}
void User::SetNationalId(int nationalId) {
	this->nationalId = nationalId;
}