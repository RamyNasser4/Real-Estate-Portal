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
	string buildingNumber;
	string userName;
	string propertyDescription;
	string userId;
	int apartmentNumber;
	int squareFootage;
	int numberOfBedrooms;
	int price;
	bool verified;
protected:
	bool highlighted;

public:
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, string currentUserId, bool highlighted, string propertyDescription);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, string currentUserId, bool highlighted);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool Verified, int price, string currentUserName, string currentUserId);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool Verified, int price, string currentUserName);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified, int price);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber);
	Property(string Location, string PropertyType, string BuildingNumber);
	Property(string Location, string PropertyType);
	Property(string Location);
	Property(const Property& Other);
	Property();


	int GetSquareFootage();
	int GetNumberOfBedrooms();
	int GetPrice();
	string GetUserId();
	int GetApartmentNumber();
	bool GetVerfied();
	bool GetHighlighted();

	string GetpropertyId();
	string GetLocation();
	string GetPropertyType();
	string GetBuildingNumber();
	string GetUserName();
	string GetPropertyDescription();

	void SetPropertyType(string PropertyType);
	void SetBuildingNumber(string BuildingNumber);
	void SetApartmentNumber(int ApartmentNumber);
	void SetSquareFootage(int SquareFootage);
	void SetLocation(string location);
	void SetNumberOfBedrooms(int NumberOfBedrooms);
	void SetVerified(bool Verified);
	void SetPrice(int price);
	void SetPropertyId(string propertyId);
	void SetHighlight(bool value);
	void SetPropertyDescription(string propertyDescription);

	string GeneratePropertyId();
};

#endif