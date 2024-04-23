#include "User.h"
#include <iostream>
#include <string>
#include "System.h"
#include "Admin.h"

using namespace std;
User::User(string fName, string lName, int natId, string password,string mobileNumber) {
	firstName = fName;
	lastName = lName;
	nationalId = natId;
	this->password = password;
	this->mobileNumber = mobileNumber;
}
User::User(string fName, string lName, int natId, string password) {
	User( fName,  lName,  natId,  password,"");
}
User::User(string fName, string lName, int natId) {
	User( fName,  lName,  natId, "");
}
User::User(string fName, string lName) {
	User( fName,  lName, 0);
}
User::User(string fName) {
	User( fName, "");
}
User::User() {
	User("");
}
User::User(const User& other) {
	this->firstName = other.firstName;
	this->lastName = other.lastName;
	this->nationalId = other.nationalId;
	this->password = other.password;
	this->mobileNumber = other.mobileNumber;
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
string User::GetPassword() {
	return password;
}
string User::GetMobileNumber() {
	return mobileNumber;
}
string User::GeneratePropertyId() {

	char alphabet[36] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
						  'h', 'i', 'j', 'k', 'l', 'm', 'n',
						  'o', 'p', 'q', 'r', 's', 't', 'u',
						  'v', 'w', 'x', 'y', 'z','0','1','2','3','4','5','6','7','8','9' };

	string propertyId = "";
	for (int i = 0; i < 8; i++)
		propertyId = propertyId + alphabet[rand() % 26];

	return propertyId;

}
int User::GetNationalId() {
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
void User::SetPassword(string password) {
	this->password = password;
}
void User::SetMobileNumber(string mobileNumber) {
	this->mobileNumber = mobileNumber;
}

void User::AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, int currentUserId,System &system) {
	Property* NewProperty = new Property(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms, false, price, currentUserName, currentUserId);
	string propertyId = GeneratePropertyId();
	while (system.properties.find(propertyId) != system.properties.end()) {
		propertyId = GeneratePropertyId();
	}
	//may cause problems
	NewProperty->SetPropertyId(propertyId);
	//system.Request(NewProperty);
}

User::~User() {

}