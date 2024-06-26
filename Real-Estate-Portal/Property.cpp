#include "Property.h"
#include <string>
using namespace std;
Property::Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, string currentUserId, bool highlighted, string propertyDescription, int compareCounter)
{
	this->location = Location;
	this->propertyType = PropertyType;
	this->city = City;
	this->addressLine = AddressLine;
	this->squareFootage = SquareFootage;
	this->numberOfBedrooms = NumberOfBedrooms;
	this->verified = verified;
	this->price = price;
	this->userName = currentUserName;
	this->userId = currentUserId;
	this->highlighted = highlighted;
	this->propertyDescription = propertyDescription;
	this->comparedCounter = compareCounter;
}
Property::Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, string currentUserId, bool highlighted, string propertyDescription) : Property(Location, PropertyType, City, AddressLine, SquareFootage, NumberOfBedrooms, verified, price, currentUserName, currentUserId, highlighted, propertyDescription, 0)

{
}
Property::Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, string currentUserId, bool highlighted) :Property(Location, PropertyType, City, AddressLine, SquareFootage, NumberOfBedrooms, verified, price, currentUserName, currentUserId, highlighted, "") {

}
Property::Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, string currentUserId) :Property(Location, PropertyType, City, AddressLine, SquareFootage, NumberOfBedrooms, verified, price, currentUserName, currentUserId, false) {

}
Property::Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName) :Property(Location, PropertyType, City, AddressLine, SquareFootage, NumberOfBedrooms, verified, price, currentUserName, 0)
{

}
Property::Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, bool verified, int price) :Property(Location, PropertyType, City, AddressLine, SquareFootage, NumberOfBedrooms, verified, price, "")
{

}
Property::Property(string Location, string PropertyType, string City, string AddressLine, int  SquareFootage, int NumberOfBedrooms, bool verified) :Property(Location, PropertyType, City, AddressLine, SquareFootage, NumberOfBedrooms, verified, 0)
{


}
Property::Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms) :Property(Location, PropertyType, City, AddressLine, SquareFootage, NumberOfBedrooms, false)
{

}
Property::Property(string Location, string PropertyType, string City, string AddressLine, int SquareFootage) :Property(Location, PropertyType, City, AddressLine, SquareFootage, 0)
{

}
Property::Property(string Location, string PropertyType, string City, string AddressLine) :Property(Location, PropertyType, City, AddressLine, 0)
{

}

Property::Property(string Location, string PropertyType, string City) :Property(Location, PropertyType, City, 0)
{
}
Property::Property(string Location, string PropertyType) :Property(Location, PropertyType, "") {

}
Property::Property(string Location) :Property(Location, "") {

}
Property::Property() :Property("")
{

}
Property::Property(const Property& Other)
{
	this->location = Other.location;
	this->propertyType = Other.propertyType;
	this->city = Other.city;
	this->addressLine = Other.addressLine;
	this->squareFootage = Other.squareFootage;
	this->numberOfBedrooms = Other.numberOfBedrooms;
	this->verified = Other.verified;
	this->price = Other.price;
	this->userName = Other.userName;
	this->userId = Other.userId;
	this->highlighted = Other.highlighted;
	this->propertyDescription = Other.propertyDescription;
	this->comparedCounter = Other.comparedCounter;
}
string Property::GeneratePropertyId() {
	char alphabet[36] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
'h', 'i', 'j', 'k', 'l', 'm', 'n',
'o', 'p', 'q', 'r', 's', 't', 'u',
'v', 'w', 'x', 'y', 'z','0','1','2','3','4','5','6','7','8','9' };

	string propertyId = "";
	for (int i = 0; i < 8; i++)
		propertyId = propertyId + alphabet[rand() % 36];

	return propertyId;
}
void Property::SetLocation(string Location)
{
	this->location = Location;
}
void Property::SetPropertyType(string PropertyType)
{
	this->propertyType = PropertyType;
}
void Property::SetCity(string City)
{
	this->city = City;
}
void Property::SetAddressLine(string AddressLine)
{
	this->addressLine = AddressLine;
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
void Property::SetPrice(int price) {
	this->price = price;
}
void Property::SetPropertyId(string propertyId) {
	this->propertyId = propertyId;
}
void Property::SetHighlight(bool value) {
	highlighted = value;
}
void Property::SetPropertyDescription(string propertyDescription) {
	this->propertyDescription = propertyDescription;
}
string Property::GetLocation()
{
	return location;
}
string Property::GetPropertyType()
{
	return propertyType;
}
string Property::GetCity()
{
	return city;
}
string Property::GetUserName() {
	return userName;
}
string Property::GetpropertyId() {
	return propertyId;
}
string Property::GetAddressLine()
{
	return addressLine;
}
int Property::GetSquareFootage()
{
	return squareFootage;
}
int Property::GetNumberOfBedrooms()
{
	return numberOfBedrooms;
}
int Property::GetPrice() {
	return price;
}
int Property::GetCompareCounter() {
	return comparedCounter;
}
string Property::GetUserId() {
	return userId;
}
bool Property::GetHighlighted() {
	return highlighted;
}
bool Property::GetVerfied()
{
	return verified;
}

string Property::GetPropertyDescription() {
	return propertyDescription;
}
void Property::IncrementCompare() {
	++comparedCounter;
}


