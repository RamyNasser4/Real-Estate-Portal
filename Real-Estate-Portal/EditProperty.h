#include <iostream>
#include <string>
#include <string.h>
#include <chrono>
#include <ctime>
using namespace std;
#pragma once
class EditProperty
{
	string Oldlocation;
	string OldpropertyType;
	string OldbuildingNumber;
	string OlduserName;
	string OldpropertyDescription;
	int    OldapartmentNumber;
	int    OldsquareFootage;
	int    OldnumberOfBedrooms;
	int    Oldprice;

	string Newlocation;
	string NewpropertyType;
	string NewbuildingNumber;
	string NewuserName;
	string NewpropertyDescription;
	int    NewapartmentNumber;
	int    NewsquareFootage;
	int    NewnumberOfBedrooms;
	int    Newprice;

	/* 
	chrono::system_clock::time_point EditTime = chrono::system_clock::now();
	time_t currentTime = std::chrono::system_clock::to_time_t(EditTime);
	//to cout u need to use ctime(&currentTime);
	  // Get the current time as a time_t object
	time_t tt;
	time(&tt);

	// Convert the time_t object to a struct tm object using the safer localtime_s function
	struct tm ti;
	errno_t err = localtime_s(&ti, &tt);
	if (err != 0) {
		cout << "Error converting time to local time format." << endl;
		return 1;
	}

	// Convert the struct tm object to a human-readable string using the safer asctime_s function
	char buffer[26]; // Buffer to store the string representation of the time
	err = asctime_s(buffer, sizeof(buffer), &ti);
	if (err != 0) {
		cout << "Error converting time to string format." << endl;
		return 1;
	}

	// Print the current time in human-readable format
	cout << "Current time: " << buffer;*/


	EditProperty(string OldLocation, string OldPropertyType, string OldBuildingNumber, int OldApartmentNumber, int OldSquareFootage, int OldNumberOfBedrooms, int Oldprice,  string OLdpropertyDescription, string NewLocation, string NewPropertyType, string NewBuildingNumber, int NewApartmentNumber, int NewSquareFootage, int NewNumberOfBedrooms, int Newprice,  string NewpropertyDescription);


};

