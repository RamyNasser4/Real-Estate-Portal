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
	string PropertyID;
public: 

	EditPropertyRequest(string OldLocation, string OldPropertyType, string OldBuildingNumber, int OldApartmentNumber, int OldSquareFootage, int OldNumberOfBedrooms, int Oldprice, string OLdpropertyDescription, string NewLocation, string NewPropertyType, string NewBuildingNumber, int NewApartmentNumber, int NewSquareFootage, int NewNumberOfBedrooms, int Newprice, string NewpropertyDescription,string PropertyID);
	
	
	//setters for old parameters
	void setOldLocation(string OldLocation);
	void SetOldPropertyType( string propertyType);
	void SetOldBuildingNumber( string buildingNumber);
	void SetOldUserName(string userName);
	void SetOldPropertyDescription( string propertyDescription);
	void SetOldApartmentNumber(int apartmentNumber);
	void SetOldSquareFootage(int squareFootage);
	void SetOldNumberOfBedrooms(int numberOfBedrooms);
	void SetOldPrice(int price);

	//setters for new parameters
	void SetNewLocation( string location);
	void SetNewPropertyType( string propertyType);
	void SetNewBuildingNumber( string buildingNumber);
	void SetNewUserName( string NewUserName);
	void SetNewPropertyDescription(string propertyDescription);
	void SetNewApartmentNumber(int apartmentNumber);
	void SetNewSquareFootage(int squareFootage);
	void SetNewNumberOfBedrooms(int numberOfBedrooms);
	void SetNewPrice(int price);


	//getters


	string GetOldLocation() ;
	string GetOldPropertyType() ;
	string GetOldBuildingNumber() ;
	string GetOldUserName() ;
	string GetOldPropertyDescription() ;
	int GetOldApartmentNumber() ;
	int GetOldSquareFootage() ;
	int GetOldNumberOfBedrooms() ;
	int GetOldPrice() ;

	string GetNewLocation() ;
	string GetNewPropertyType() ;
	string GetNewBuildingNumber() ;
	string GetNewUserName() ;
	string GetNewPropertyDescription() ;
	int GetNewApartmentNumber() ;
	int GetNewSquareFootage() ;
	int GetNewNumberOfBedrooms() ;
	int GetNewPrice();
};

