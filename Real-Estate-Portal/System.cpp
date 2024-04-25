#include "System.h"
#include "User.h"
#include "Admin.h"
#include <string>
#include <iostream>
using namespace std;

unordered_map<int, User*> System::GetUsers() {
	return users;
}
unordered_map <string, Property*> System::GetProperties() {
	return properties;
}
void System::SignUp(string fName, string lName, int natId, string password, string mobileNumber) {
	if (users.find(natId) == users.end()) {
		users[natId] = new User(fName, lName, natId, password, mobileNumber);
		cout << "Registered Successfully " << endl;
	}
	else {
		cout << "User already exists" << endl;
		throw std::exception("User already exists");
		//Call login
	}
}
void System::Login(int ID, string password) {
	if (users.find(ID) == users.end()) {
		//Call Sign Up
		cout << "User is not Registered to system" << " " << "Sign Up " << endl;
		throw exception("User Not Found");
	}
	else {
		Admin* admin = dynamic_cast<Admin*>(users[ID]);
		if (users[ID]->GetPassword() == password) {
			if (admin) {
				cout << "Admin Signed In" << endl;
			}
			else {
				cout << "User Signed In" << endl;
			}
		}
		else {
			cout << "Invalid National ID or Password" << endl;
			throw std::exception("Invalid National ID or Password");
		}
	}
}
void System::RemoveUser(int adminID,int userID, System &system) {
	if (users.find(adminID) != users.end()) {
		Admin* admin = dynamic_cast<Admin*>(users[adminID]);
		if (admin) {
			admin->RemoveUser(userID, *this);
		}
		else {
			cout << "No Permission to remove user" << endl;
			throw new exception("No Permission to remove user");
		}
	}
	else {
		cout << "Invalid ID" << endl;
		throw new exception("Invalid ID");
	}
}
void System::Request(Property* property) {
	if (!property->GetVerfied()) {
		unVerified.push(property);
	}
}
void System::UserChangePassword(string currentPassword, string newPassword, User& user) {
	if (user.GetPassword() == currentPassword) {
		user.SetPassword(newPassword);
		cout << "Password changed successfuly\n";
	}
	else {
		cout << "Incorrect password, Please try again.\n";
		throw new exception("Incorrect password");
	}
}
void System::AddToCompare(string propertyId) {
	if (propertyComparison.size() <= 3) {
		if (propertyComparison.find(propertyId) == propertyComparison.end()) {
			propertyComparison[propertyId] = properties[propertyId];
		}
		else {
			throw new exception("Property already in comparison list");
		}
	}
	else {
		throw new exception("Cannot compare more than 4 properties");
	}
}
void System::RemoveFromCompare(string propertyId) {
	propertyComparison.erase(propertyId);
}
void System::AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, int currentUserId, bool highlighted, string propertyDescription) {
	Admin* admin = dynamic_cast<Admin*>(users[currentUserId]);
	if (admin) {
		admin->AddProperty(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms, price, admin->GetName(), currentUserId,highlighted,propertyDescription, *this);
	}
	else {
		//in case of not an admin
		 
		users[currentUserId]->AddProperty(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms, price, admin->GetName(), currentUserId,highlighted,propertyDescription, *this);
	}
}
void System::EditProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms,  int price, string currentUserName, int currentUserId, bool highlighted, string propertyDescription, System& system, string propertyId) {
	Admin* admin = dynamic_cast<Admin*>(users[currentUserId]);
	if (admin) {
		admin->EditProperty(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms, price, currentUserName, currentUserId, highlighted,propertyDescription, *this, propertyId);
	}
	else {
		//Call Edit property fn from User Class
	}
}
void System::RemoveProperty(string propertyId, System& system, int currentUserId) {
	Admin* admin = dynamic_cast<Admin*>(users[currentUserId]);
	if (admin) {
		admin->RemoveProperty(propertyId, *this);
	}
	else {
		//Call Remove Property fn from User Class
	}
}
unordered_map<string, Property*> System::FilterBySquareFootage(int squareFootage) {
	return propertyFilterSquareFootage[squareFootage];
}
unordered_map<string, Property*> System::FilterByLocation(string locations) {
	return propertyFilterLocations[locations];
}
unordered_map<string, Property*> System::FilterByType(string type) {
	return propertyFilterType[type];
}
unordered_map<string, Property*> System::FilterByNumberOfBedrooms(int bedrooms) {
	return propertyFilterBedRooms[bedrooms];
}
unordered_map<string, Property*> System::FilterByPrice(int minPrice, int maxPrice) {
	if (minPrice > maxPrice)
		swap(minPrice, maxPrice);
	auto lower = propertyFilterPrice.lower_bound(minPrice);
	auto upper = propertyFilterPrice.upper_bound(maxPrice);
	unordered_map<string, Property*> filtered;
	for (auto umap = lower; umap != upper; ++umap) {
		for (auto property = umap->second.begin(); property != umap->second.end(); property++) {
			filtered[property->second->GetpropertyId()] = property->second;
		}
	}
	return filtered;
}
int System::UserCounter()
{
	return users.size();
}
int System::PropertiesCounter() {
	return properties.size();
}
