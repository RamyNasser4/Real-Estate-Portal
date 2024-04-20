#include "Admin.h"
#include "Property.h"
#include "User.h"
#include "System.h"
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
Admin::Admin(string firstName, string lastName, int nationalId, string password) : User(firstName, lastName, nationalId, password) {

}
Admin::Admin(string firstName, string lastName, int nationalId) {
	Admin(firstName, lastName, nationalId, "");
}
Admin::Admin(string firstName, string lastName) {
	Admin(firstName, lastName, 0);
}
Admin::Admin(string firstName) {
	Admin(firstName, "");
}
Admin::Admin() {
	Admin("");
}
Admin::Admin(const Admin& admin) : User((User)admin) {

}
void Admin::AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, int currentUserId, System system) {
	Property* NewProperty = new Property(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms, true, price, currentUserName, currentUserId);
	string propertyId = ApartmentNumber + " " + BuildingNumber + " " + Location;
	system.properties[propertyId] = NewProperty;
	system.propertyFilterBedRooms[NumberOfBedrooms][propertyId] = NewProperty;
	system.propertyFilterSquareFootage[SquareFootage][propertyId] = NewProperty;
	system.propertyFilterType[PropertyType][propertyId] = NewProperty;
	system.propertyFilterLocations[Location][propertyId] = NewProperty;
	system.propertyFilterPrice[price][propertyId] = NewProperty;
}
void Admin::EditProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, int currentUserId, System &system)
{
	//cout << "Enter id to edit";
	string propertyId = ApartmentNumber + " " + BuildingNumber + " " + Location;
	Property* property = system.properties[propertyId];
	/*
	if (property->GetLocation() != Location)
	{
		system.propertyFilterLocations[property->GetLocation()].erase(propertyId);
		system.propertyFilterLocations[Location][propertyId] = property;
		property->SetLocation(Location);	
	}
	*/
	if (property->GetNumberOfBedrooms() != NumberOfBedrooms)
	{
		system.propertyFilterBedRooms[property->GetNumberOfBedrooms()].erase(propertyId);
		system.propertyFilterBedRooms[NumberOfBedrooms][propertyId] = property;
		property->SetNumberOfBedrooms(NumberOfBedrooms);
	}
	if (property->GetPrice() != price)
	{
		system.propertyFilterPrice[property->GetPrice()].erase(propertyId);
		system.propertyFilterPrice[price][propertyId] = property;
		property->SetPrice(price);
	}
	if (property->GetPropertyType() != PropertyType)
	{
		system.propertyFilterType[property->GetPropertyType()].erase(propertyId);
		system.propertyFilterType[PropertyType][propertyId] = property;
		property->SetPropertyType(PropertyType);
	}
	if (property->GetSquareFootage() != SquareFootage)
	{
		system.propertyFilterSquareFootage[property->GetSquareFootage()].erase(propertyId);
		system.propertyFilterSquareFootage[SquareFootage][propertyId] = property;
		property->SetSquareFootage(SquareFootage);
	}
}


void Admin::RemoveProperty(string property_id, System system) {
	Property* property = system.properties[property_id];
	system.propertyFilterBedRooms[property->GetNumberOfBedrooms()].erase(property_id);
	system.propertyFilterLocations[property->GetLocation()].erase(property_id);
	system.propertyFilterType[property->GetPropertyType()].erase(property_id);
	system.propertyFilterSquareFootage[property->GetSquareFootage()].erase(property_id);
	system.properties.erase(property_id);
	delete property;
}


void Admin::RemoveUser(int ID, unordered_map<int, User*>& users) {
	if (users.find(ID) == users.end()) {
		cout << "this ID is not registered on the system." << endl;
	}
	else {
		users.erase(ID);
		cout << "User Successfully Deleted." << endl;
	}
}
