#ifndef PROPERTY_H
#define PROPERTY_H
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class Property
{
	string propertyId;
	string location;
	string propertyType;
	string city;
	string userName;
	string propertyDescription;
	string userId;
	string addressLine;
	int squareFootage;
	int numberOfBedrooms;
	int price;
	int comparedCounter;
	bool verified;
protected:
	bool highlighted;

public:
	Property(string Location, string PropertyType, string City, string addressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, string currentUserId, bool highlighted, string propertyDescription,int compareCounter);
	Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, string currentUserId, bool highlighted, string propertyDescription);
	Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, string currentUserId, bool highlighted);
	Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool Verified, int price, string currentUserName, string currentUserId);
	Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool Verified, int price, string currentUserName);
	Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price);
	Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified);
	Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms);
	Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage);
	Property(string Location, string PropertyType, string City, string AddressLine);
	Property(string Location, string PropertyType, string City);
	Property(string Location, string PropertyType);
	Property(string Location);
	Property(const Property& Other);
	Property();


	int GetSquareFootage();
	int GetNumberOfBedrooms();
	int GetPrice();
	int GetCompareCounter();
	bool GetVerfied();
	bool GetHighlighted();

	string GetUserId();
	string GetpropertyId();
	string GetLocation();
	string GetPropertyType();
	string GetCity();
	string GetAddressLine();
	string GetUserName();
	string GetPropertyDescription();
	string GeneratePropertyId();

	void SetPropertyType(string PropertyType);
	void SetCity(string City);
	void SetAddressLine(string AddressLine);
	void SetSquareFootage(int SquareFootage);
	void SetLocation(string location);
	void SetNumberOfBedrooms(int NumberOfBedrooms);
	void SetVerified(bool Verified);
	void SetPrice(int price);
	void SetPropertyId(string propertyId);
	void SetHighlight(bool value);
	void SetPropertyDescription(string propertyDescription);
	void IncrementCompare();

	
};

#endif