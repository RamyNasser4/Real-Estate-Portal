#include "EditUserRequest.h"
#include <ctime>
#include <iostream>
#include"User.h"
using namespace std;
EditUserRequest::EditUserRequest(string oldFirstName, string newFirstName, string oldLastName, string newLastName, string oldMobileNumber, string newMobileNumber, bool password,string NationalID) {
	this->oldFirstName = oldFirstName;
	this->newFirstName = newFirstName;
	this->oldLastName =	 oldLastName;
	this->newLastName =	 newLastName;
	this->oldMobileNumber = oldMobileNumber;
	this->newMobileNumber = newMobileNumber;
	this->password = password;
    this->timeStamp = time(&timeStamp);
    this->NationalID = NationalID;
}

//setters

void EditUserRequest::SetOldFirstName(string firstName) {
    oldFirstName = firstName;
}

void EditUserRequest::SetOldLastName(string lastName) {
    oldLastName = lastName;
}

void EditUserRequest::SetOldMobileNumber(string mobileNumber) {
    oldMobileNumber = mobileNumber;
}

void EditUserRequest::SetNewFirstName(string firstName) {
    newFirstName = firstName;
}

void EditUserRequest::SetNewLastName(string lastName) {
    newLastName = lastName;
}

void EditUserRequest::SetNewMobileNumber(string mobileNumber) {
    newMobileNumber = mobileNumber;
}



// Getters 


string EditUserRequest::GetOldFirstName() {
    return oldFirstName;
}

string EditUserRequest::GetOldLastName() {
    return oldLastName;
}

string EditUserRequest::GetOldMobileNumber() {
    return oldMobileNumber;
}
string EditUserRequest::GetNewFirstName() {
    return newFirstName;
}

string EditUserRequest::GetNewLastName() {
    return newLastName;
}

string EditUserRequest::GetNewMobileNumber() {
    return newMobileNumber;
}
