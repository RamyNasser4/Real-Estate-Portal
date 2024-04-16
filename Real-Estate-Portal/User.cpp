#include "User.h"
User::User() {
	firstName = "noName";
	lastName = "noName";
	nationality = "noNationality";
}
User::User(string fNmae,string lName,string nat) {
	firstName = fNmae;
	lastName = lName;
	nationality = nat;
}
User::User(const User& other) {
	this->firstName = other.firstName;
	this->lastName = other.lastName;
	this->nationality = other.nationality;
}
