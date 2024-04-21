#include "System.h"
#include "User.h"
#include "Admin.h"
#include <string>
#include <iostream>
using namespace std;

unordered_map<int, User*> System::GetUsers() {
	return users;
}
void System::SignUp(string fName, string lName, int natId, string password,string mobileNumber) {
	if (users.find(natId) == users.end()) {
		users[natId] = new User(fName, lName, natId, password,mobileNumber);
		cout << "Registered Successfully " << endl;
	}
	else {
		cout << "User already exists" << endl;
		//Call login
	}
}
void System::Login(int ID, string password) {
	if (users.find(ID) == users.end()) {
		//Call Sign Up
		cout << "User is not Registered to system" << " " << "Sign Up " << endl;
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
		}
	}
}
void System::RemoveUser(int adminID, int ID) {
	if (users.find(adminID) != users.end()) {
		Admin* admin = dynamic_cast<Admin*>(users[adminID]);
		if (admin) {
			admin->RemoveUser(ID, users);
		}
		else {
			cout << "Not an admin" << endl;
		}
	}
	else {
		cout << "Invalid ID" << endl;
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
void System::Request(Property property) {
	if (!property.GetVerfied()) {
		unVerified.push(property);
	}
}
void System::UserChangePassword(string currentPassword, string newPassword, int nationalId) {
	User* user = users[nationalId];
	if (users.find(nationalId) != users.end()) {
		if (user->GetPassword() == currentPassword) {
			user->SetPassword(newPassword);
			cout << "Password changed successfuly\n";
		}
		else {
			cout << "Incorrect password, Please try again.\n";
		}
	}
	else {
		cout << "User not found\n";
	}
	
}
void System::UserCounter()
{
	int counter = users.size();
	if (counter != 0)
	{
		cout << "Number of users in the system = " << counter<<"\n";
	}
	else
	{
		cout << "There are no users in the system at the moment \n";
	}
}
