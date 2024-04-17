#include "Property.h"


                                                                                         //constructors


Property::Property(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified)
{
	this->Location = Location;
	this->PropertyType = PropertyType;
	this->BuildingNumber = BuildingNumber;
	this->ApartmentNumber = ApartmentNumber;
	this->SquareFootage = SquareFootage;
	this->NumberOfBedrooms = NumberOfBedrooms;
	this->Verified = Verified;

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
	Property(Location, PropertyType, BuildingNumber, 0);
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
	this->Location = Other.Location;
	this->PropertyType = Other.PropertyType;
	this->BuildingNumber = Other.BuildingNumber;
	this->ApartmentNumber = Other.ApartmentNumber;
	this->SquareFootage = Other.SquareFootage;
	this->NumberOfBedrooms = Other.NumberOfBedrooms;
	this->Verified = Other.Verified;
}


                                                                                             //setters


void Property::SetLocation(string Location)
{
	this->Location = Location;
}
void Property::SetPropertyType(string PropertyType)
{
	this->PropertyType = PropertyType;
}
void Property::SetBuildingNumber(string BuildingNumber)
{
	this->BuildingNumber = BuildingNumber;
}
void Property::SetApartmentNumber(int ApartmentNumber)
{
	this->ApartmentNumber = ApartmentNumber;
}
void Property::SetSquareFootage(int SquareFootage)
{
	this->SquareFootage = SquareFootage;
}
void Property::SetNumberOfBedrooms(int NumberOfBedrooms)
{
	this->NumberOfBedrooms = NumberOfBedrooms;
}
void Property::SetVerified(bool Verified)
{
	this->Verified = Verified;
}


                                                                                           //getters


string Property::GetLocation()
{
	return Location;
}
string Property::GetPropertyType()
{
	return PropertyType;
}
string Property::GetBuildingNumber()
{
	return BuildingNumber;
}
int Property::GetApartmentNumber()
{
	return ApartmentNumber;
}
int Property::GetsquareFootage()
{
	return SquareFootage;
}
int Property::GetNumberOfBedrooms()
{
	return NumberOfBedrooms;
}
bool Property::GetVerfied()
{
	return Verified;
}





