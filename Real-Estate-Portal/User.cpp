#include "User.h"
#include <iostream>
#include <string>
using namespace std;
User::User() {
	firstName = "";
	lastName = "";
	nationalId = 0;
}
User::User(string fName, string lName, int natId, string password,string mobileNumber) {
	firstName = fName;
	lastName = lName;
	nationalId = natId;
	this->password = password;
	this->mobileNumber = mobileNumber;
}
User::User(string fName, string lName, int natId, string password) {
	firstName = fName;
	lastName = lName;
	nationalId = natId;
	this->password = password;
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
User::User(string fName) {
	firstName = fName;
	lastName = "";
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
string User::GetName() {
	return firstName + " " +lastName;
}
int User::GetNationalId() {
	return this->nationalId;
}
string User::GetPassword() {
	return password;
}
string User::GetMobileNumber() {
	return mobileNumber;
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
void User::SetPassword(string password) {
	this->password = password;
}
void User::SetMobileNumber(string mobileNumber) {
	this->mobileNumber = mobileNumber;
}
User::~User() {
	
}
