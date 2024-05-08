#pragma once
#include<string>
#include<string.h>
#include<ctime>
using namespace std;
class EditPropertyRequest
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

	time_t CurrentTime;

	EditPropertyRequest(string OldLocation, string OldPropertyType, string OldBuildingNumber, int OldApartmentNumber, int OldSquareFootage, int OldNumberOfBedrooms, int Oldprice, string OLdpropertyDescription, string NewLocation, string NewPropertyType, string NewBuildingNumber, int NewApartmentNumber, int NewSquareFootage, int NewNumberOfBedrooms, int Newprice, string NewpropertyDescription);


};

