#pragma once
#include <ctime>
#include <iostream>
#include"User.h"
using namespace std;
class EditUserRequest
{
	string oldFirstName;
	string oldLastName;
	string oldMobileNumber;
	string newFirstName;
	string newLastName;
	string newMobileNumber;
	bool password;
	time_t timeStamp;
	EditUserRequest(string oldFirstName,string newFirstName,string oldLastName,string newLastName,string oldMobileNumber,string newMobileNumber,bool password,time_t timestamp);

    //setters

    void SetOldFirstName(string firstName);
    void SetOldLastName(string lastName);
    void SetOldMobileNumber(string mobileNumber);
    void SetNewFirstName(string firstName);
    void SetNewLastName(string lastName);
    void SetNewMobileNumber(string mobileNumber);


    // Getters 

    string GetOldFirstName();
    string GetOldLastName();
    string GetOldMobileNumber();
    string GetNewFirstName();
    string GetNewLastName();
    string GetNewMobileNumber();
};

