#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class Property
{
	string location;
	string propertyType;
	string buildingNumber;
	int apartmentNumber;
	int squareFootage;
    int numberOfBedrooms;
	bool verified;

public:

	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool Verified);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage);
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber);
	Property(string Location, string PropertyType, string BuildingNumber);
	Property(string Location, string PropertyType);
	Property(string Location);
	Property(const Property& Other);
	Property();

	string GetLocation();
	int GetSquareFootage();
	int GetNumberOfBedrooms();
	bool GetVerfied();
	string GetPropertyType();
	string GetBuildingNumber();
	int GetApartmentNumber();

	void SetPropertyType(string PropertyType);
	void SetBuildingNumber(string BuildingNumber);
	void SetApartmentNumber(int ApartmentNumber);
	void SetSquareFootage(int SquareFootage);
	void SetLocation(string location);
	void SetNumberOfBedrooms(int NumberOfBedrooms);
	void SetVerified(bool Verified);


};

