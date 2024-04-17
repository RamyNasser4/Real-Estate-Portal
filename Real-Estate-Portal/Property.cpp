#include "Property.h"
#include <string>
using namespace std;
Property::Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified)
{
	this->location = Location;
	this->propertyType = PropertyType;
	this->buildingNumber = BuildingNumber;
	this->apartmentNumber = ApartmentNumber;
	this->squareFootage = SquareFootage;
	this->numberOfBedrooms = NumberOfBedrooms;
	this->verified = verified;

}
Property::Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms)
{
	Property(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms,false);
}
Property::Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage)
{
	Property(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, 0);
}
Property::Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber)
{
	Property(Location, PropertyType, BuildingNumber, ApartmentNumber, 0);
}
Property::Property(string Location, string PropertyType, string BuildingNumber)
{
	Property(Location, PropertyType, BuildingNumber,0 );
}
Property::Property(string Location, string PropertyType)
{
	Property(Location, PropertyType,"");
}
Property::Property(string Location)
{
	Property(Location,"");
}
Property::Property()
{
	Property("");
}
Property::Property(const Property& Other)
{
	this->location = Other.location;
	this->propertyType = Other.propertyType;
	this->buildingNumber = Other.buildingNumber;
	this->apartmentNumber = Other.apartmentNumber;
	this->squareFootage = Other.squareFootage;
	this->numberOfBedrooms = Other.numberOfBedrooms;
	this->verified = Other.verified;
}

void Property::SetLocation(string Location)
{
	this->location = Location;
}
void Property::SetPropertyType(string PropertyType)
{
	this->propertyType = PropertyType;
}
void Property::SetBuildingNumber(string BuildingNumber)
{
	this->buildingNumber = BuildingNumber;
}
void Property::SetApartmentNumber(int ApartmentNumber)
{
	this->apartmentNumber = ApartmentNumber;
}
void Property::SetSquareFootage(int SquareFootage)
{
	this->squareFootage = SquareFootage;
}
void Property::SetNumberOfBedrooms(int NumberOfBedrooms)
{
	this->numberOfBedrooms = NumberOfBedrooms;
}
void Property::SetVerified(bool Verified)
{
	this->verified = Verified;
}


string Property::GetLocation()
{
	return location;
}
string Property::GetPropertyType()
{
	return propertyType;
}
string Property::GetBuildingNumber()
{
	return buildingNumber;
}
int Property::GetApartmentNumber()
{
	return apartmentNumber;
}
int Property::GetSquareFootage()
{
	return squareFootage;
}
int Property::GetNumberOfBedrooms()
{
	return numberOfBedrooms;
}
bool Property::GetVerfied()
{
	return verified;
}





