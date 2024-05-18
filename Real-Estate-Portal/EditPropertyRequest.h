#pragma once
#include<string>
#include<string.h>
#include<ctime>
using namespace std;
class EditPropertyRequest
{
	string Oldlocation;
	string OldpropertyType;
	string Oldcity;
	string OldpropertyDescription;
	string    OldaddressLine;
	int    OldsquareFootage;
	int    OldnumberOfBedrooms;
	int    Oldprice;

	string Newlocation;
	string NewpropertyType;
	string Newcity;
	string NewpropertyDescription;
	string    NewaddressLine;
	int    NewsquareFootage;
	int    NewnumberOfBedrooms;
	int    Newprice;

	string CurrentTime;
	string PropertyID;
	string userID;
public:
	EditPropertyRequest(string OldLocation, string OldPropertyType, string Oldcity, string OldaddressLine, int OldSquareFootage, int OldNumberOfBedrooms, int Oldprice, string OLdpropertyDescription, string NewLocation, string NewPropertyType, string Newcity, string NewaddressLine, int NewSquareFootage, int NewNumberOfBedrooms, int Newprice, string NewpropertyDescription, string PropertyID, string UserID, string time);
	EditPropertyRequest(string OldLocation, string OldPropertyType, string Oldcity, string OldaddressLine, int OldSquareFootage, int OldNumberOfBedrooms, int Oldprice, string OLdpropertyDescription, string NewLocation, string NewPropertyType, string Newcity, string NewaddressLine, int NewSquareFootage, int NewNumberOfBedrooms, int Newprice, string NewpropertyDescription, string PropertyID, string UserID);


	//setters for old parameters
	void setOldLocation(string OldLocation);
	void SetOldPropertyType(string propertyType);
	void SetOldCity(string city);
	void SetOldPropertyDescription(string propertyDescription);
	void SetOldAddressLine(string addressLine);
	void SetOldSquareFootage(int squareFootage);
	void SetOldNumberOfBedrooms(int numberOfBedrooms);
	void SetOldPrice(int price);

	//setters for new parameters
	void SetNewLocation(string location);
	void SetNewPropertyType(string propertyType);
	void SetNewCity(string city);
	void SetNewPropertyDescription(string propertyDescription);
	void SetNewAddressLine(string addressLine);
	void SetNewSquareFootage(int squareFootage);
	void SetNewNumberOfBedrooms(int numberOfBedrooms);
	void SetNewPrice(int price);


	//getters


	string GetOldLocation();
	string GetOldPropertyType();
	string GetOldCity();
	string GetOldPropertyDescription();
	string GetPropertyId();
	string GetUserId();
	string GetOldAddressLine();
	int GetOldSquareFootage();
	int GetOldNumberOfBedrooms();
	int GetOldPrice();

	string GetNewLocation();
	string GetNewPropertyType();
	string GetNewCity();
	string GetNewPropertyDescription();
	string GetNewAddressLine();
	int GetNewSquareFootage();
	int GetNewNumberOfBedrooms();
	int GetNewPrice();
	string GetTime();
};

