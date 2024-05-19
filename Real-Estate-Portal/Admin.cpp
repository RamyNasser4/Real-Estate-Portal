#include "Admin.h"
#include "Property.h"
#include "User.h"
#include "System.h"
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
Admin::Admin(string firstName, string lastName, string nationalId, string password, string mobileNumber) : User(firstName, lastName, nationalId, password, mobileNumber) {

}
Admin::Admin(string firstName, string lastName, string nationalId, string password) : Admin(firstName, lastName, nationalId, password, "") {

}
Admin::Admin(string firstName, string lastName, string nationalId) :Admin(firstName, lastName, nationalId, "") {

}
Admin::Admin(string firstName, string lastName) :Admin(firstName, lastName, "") {

}
Admin::Admin(string firstName) :Admin(firstName, "") {

}
Admin::Admin() : Admin("") {

}
Admin::Admin(const Admin& admin) : User((User)admin) {

}
void Admin::AddProperty(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription, System& system) {
	Property* NewProperty = new Property(Location, PropertyType, City, AddressLine, SquareFootage, NumberOfBedrooms, true, price, currentUserName, currentUserId, false, propertyDescription, 0);
	string propertyId = NewProperty->GeneratePropertyId();
	while (system.properties.find(propertyId) != system.properties.end()) {
		propertyId = NewProperty->GeneratePropertyId();
	}
	NewProperty->SetPropertyId(propertyId);
	UserAddedProperty(propertyId, NewProperty);
	system.properties[propertyId] = NewProperty;
	system.propertyFilterBedRooms[NumberOfBedrooms][propertyId] = NewProperty;
	system.propertyFilterSquareFootage[SquareFootage][propertyId] = NewProperty;
	system.propertyFilterType[PropertyType][propertyId] = NewProperty;
	system.propertyFilterLocations[Location][propertyId] = NewProperty;
	system.propertyFilterPrice[price][propertyId] = NewProperty;
	system.propertiesCount++;
	system.SortUserByPropertyCount(currentUserId);
}

void Admin::EditProperty(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription, System& system, string propertyId)
{

	Property* property = system.properties[propertyId];
	EditPropertyRequest* CurrentRequest = new EditPropertyRequest(property->GetLocation(), property->GetPropertyType(), property->GetCity(), property->GetAddressLine(), property->GetSquareFootage(), property->GetNumberOfBedrooms(), property->GetPrice(), property->GetPropertyDescription(), Location, PropertyType, City, AddressLine, SquareFootage, NumberOfBedrooms, price, propertyDescription, property->GetpropertyId(), property->GetUserId());
	if (property->GetLocation() != Location)
	{
		system.propertyFilterLocations[property->GetLocation()].erase(propertyId);
		system.propertyFilterLocations[Location][propertyId] = property;
		property->SetLocation(Location);
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
	property->SetPropertyDescription(propertyDescription);
	property->SetCity(City);
	property->SetAddressLine(AddressLine);
	system.EditPropertyLogs.push_back(CurrentRequest);
}


void Admin::RemoveProperty(string propertyId, System& system) {
	Property* property = system.properties[propertyId];
	User* user = system.GetUser(property->GetUserId());
	user->RemoveProperty(propertyId,system);
}


void Admin::RemoveUser(string ID, System& system) {
	while (!system.unVerified.empty() &&
		system.unVerified.front()->GetUserId() == ID) {
		system.unVerified.pop();
	}
	unordered_map<string, Property*>propertiesToRemove = system.users[ID]->GetUserProperties();
	for (auto it = propertiesToRemove.begin(); it != propertiesToRemove.end(); it++) {
		RemoveProperty(it->second->GetpropertyId(), system);
	}
	if (system.users.find(ID) == system.users.end()) {
		cout << "this ID is not registered on the system." << endl;
		throw exception("User Not Found");
	}
	else {
		system.users.erase(ID);
		cout << "User Successfully Deleted." << endl;
		system.userCount--;
	}
}

void Admin::AdminApproveorDeclineProperty(System* system, bool approved, User* user) {
	if (!system->unVerified.empty()) {
		Property* currentProperty = system->unVerified.front();
		system->unVerified.pop();
		if (approved) {
			system->properties[currentProperty->GetpropertyId()]->SetVerified(true);
			system->propertyFilterBedRooms[currentProperty->GetNumberOfBedrooms()][currentProperty->GetpropertyId()] = currentProperty;
			system->propertyFilterLocations[currentProperty->GetLocation()][currentProperty->GetpropertyId()] = currentProperty;
			system->propertyFilterPrice[currentProperty->GetPrice()][currentProperty->GetpropertyId()] = currentProperty;
			system->propertyFilterSquareFootage[currentProperty->GetSquareFootage()][currentProperty->GetpropertyId()] = currentProperty;
			system->propertyFilterType[currentProperty->GetPropertyType()][currentProperty->GetpropertyId()] = currentProperty;
			cout << "Property Approved!";
			system->propertiesCount++;
			system->SortUserByPropertyCount(user->GetNationalId());
		}
		else {
			user->RemoveProperty(currentProperty->GetpropertyId(), *system);
			cout << "Property Declined";
		}
		while (system->unVerified.size() != 0 && system->users.find(system->unVerified.front()->GetUserId()) == system->users.end()) {
			system->unVerified.pop();
		}
	}
	else {
		cout << "There are no Properties to approve or decline";
		throw exception("Property Not Found");
	}

}
void Admin::HighlightProperty(string propertyId, System* system) {
	if (system->properties.find(propertyId) != system->properties.end()) {
		Property* property = system->properties[propertyId];
		if (!property->GetHighlighted()) {
			property->SetHighlight(true);
			cout << "Property highlighted successfully\n";
		}
		else {
			cout << "Property already highlighted\n";
		}
	}
	else {
		cout << "Property doesn't exists\n";
		throw exception("Property Not Found");
	}

}
void Admin::RemoveHighlight(string propertyId, System* system) {
	if (system->properties.find(propertyId) != system->properties.end()) {
		Property* property = system->properties[propertyId];
		if (property->GetHighlighted()) {
			property->SetHighlight(false);
			cout << "Highlighted removed successfully\n";
		}
		else {
			cout << "Property already not highlighted\n";
		}

	}
	else {
		cout << "Property doesn't exists\n";
	}


}