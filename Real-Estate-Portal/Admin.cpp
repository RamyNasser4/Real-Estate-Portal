#include "Admin.h"
#include "Property.h"
#include "User.h"
#include "System.h"
#include <string>
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



}void Admin::DeleteProperty(string propertyId, Property property, System system) {
	system.properties[propertyId]->GetBuildingNumber().erase(propertyId);

}


	/*if (system.properties.erase(propertyId)) {
		cout << "Property with ID " << propertyId << " has been deleted.\n";
	}


	else {
		cout << "Property with ID " << propertyId << " not found.\n";
	}*/




//void Admin::DeleteProperty(string propertyId, string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, int currentUserId, System system) {
//	system.propertyFilterBedRooms[NumberOfBedrooms].erase(propertyId);
//	system.propertyFilterSquareFootage[SquareFootage].erase(propertyId);
//	system.propertyFilterType[PropertyType].erase(propertyId);
//	system.propertyFilterLocations[Location].erase(propertyId);
//	system.propertyFilterPrice[price].erase(propertyId);
//
//	if (system.properties.erase(propertyId)) {
//		cout << "Property with ID " << propertyId << " has been deleted.\n";
//	}
//
//
//	else {
//		cout << "Property with ID " << propertyId << " not found.\n";
//	}


void Admin::RemoveUser(int ID, unordered_map<int, User*>& users) {
	if (users.find(ID) == users.end()) {
		cout << "this ID is not registered on the system." << endl;
	}
	else {
		users.erase(ID);
		cout << "User Successfully Deleted." << endl;
	}
}
