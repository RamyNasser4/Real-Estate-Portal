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
	Property();
	Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified);
};

