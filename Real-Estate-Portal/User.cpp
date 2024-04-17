#include "User.h"
User::User() {
	firstName = "noName";
	lastName = "noName";
	nationality = "noNationality";
}
User::User(string fName,string lName,string nat) {
	firstName = fName;
	lastName = lName;
	nationality = nat;
}
User::User(const User& other) {
	this->firstName = other.firstName;
	this->lastName = other.lastName;
	this->nationality = other.nationality;
}
User::User(string fName, string lName) {
	firstName = fName;
	lastName = lName;
	nationality = "noNationality";
}
User::User(string fName) {
	firstName = fName;
	lastName = "noName"; 
	nationality = "noNationality";
}


string User::getFirstName() {
	return this->firstName;
 }
string User::getLastName() {
	return this->lastName;
}
string User::getNationality() {
	return this->nationality;
}
void User::SetFirstName(string firstname) {
	this->firstName = firstname;

}
void User::SetLastName(string lastname) {
	this->lastName = lastname;

}
void User::SetNationality(string nationality) {
	this->nationality = nationality;

}