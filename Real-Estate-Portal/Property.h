#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class Property
{
	string Location, PropertyType, BuildingNumber;
	int ApartmentNumber, SquareFootage, NumberOfBedrooms;
	bool Verified;

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

	void SetLocation(string location);
	string GetLocation();
	void SetPropertyType(string PropertyType);
	string GetPropertyType();
	void SetBuildingNumber(string BuildingNumber);
	string GetBuildingNumber();
	void SetApartmentNumber(int ApartmentNumber);
	int GetApartmentNumber();
	void SetSquareFootage(int SquareFootage);
	int GetsquareFootage();
	void SetNumberOfBedrooms(int NumberOfBedrooms);
	int GetNumberOfBedrooms();
	int GetsquareFootage();
	void SetVerified(bool Verified);
	bool GetVerfied();


};

