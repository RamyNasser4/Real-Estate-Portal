#include "System.h"
#include "User.h"
#include <string>
#include <iostream>
using namespace std;

unordered_map<string, User*> System::GetUsers() {
	return users;
}
unordered_map <string, Property*> System::GetProperties() {
	return properties;
}
vector<Property*>  System::GetPropertyComparison() {
	return propertyComparison;
}
map<int, unordered_map<string, Property*>>System::GetPropertyFilterSquareFootage() {
	return propertyFilterSquareFootage;
}
unordered_map<int, unordered_map<string, Property*>> System::GetpropertyFilterBedRooms() {
	return propertyFilterBedRooms;

}
unordered_map<string, unordered_map<string, Property*>> System::GetPropertyFilterType() {
	return propertyFilterType;
}
unordered_map<string, unordered_map<string, Property*>> System::GetPropertyFilterLocations() {
	return propertyFilterLocations;
}
map<int, unordered_map<string, Property*>>System::GetPropertyFilterPrice() {
	return propertyFilterPrice;
}
void System::SignUp(string fName, string lName, string natId, string password, string mobileNumber) {
	if (users.find(natId) == users.end()) {
		users[natId] = new User(fName, lName, natId, password, mobileNumber);
		cout << "Registered Successfully " << endl;
	}
	else {
		cout << "User already exists" << endl;
		throw exception("User already exists");
		//Call login
	}
	userCount++;
}
void System::Login(string ID, string password) {
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
			currentUserId = users[ID]->GetNationalId();
			currentUserName = users[ID]->GetName();
		}
		else {
			cout << "Invalid National ID or Password" << endl;
			throw exception("Invalid National ID or Password");
		}
	}
}
void System::Logout() {
	currentUserId = "";
	currentUserName = "";
	propertyComparison.clear();
}
void System::RemoveUser(string adminID, string userID) {
	if (users.find(adminID) != users.end()) {
		Admin* admin = dynamic_cast<Admin*>(users[adminID]);
		if (admin) {
			admin->RemoveUser(userID, *this);
		}
		else {
			cout << "No Permission to remove user" << endl;
			throw exception("No Permission to remove user");
		}
	}
	else {
		cout << "Invalid ID" << endl;
		throw exception("Invalid ID");
	}
}
void System::Request(Property* property) {
	if (!property->GetVerfied()) {
		unVerified.push(property);
	}
}
void System::UserChangePassword(string currentPassword, string newPassword, User* user) {
	if (user->GetPassword() == currentPassword) {
		user->SetPassword(newPassword);
		cout << "Password changed successfuly\n";
	}
	else {
		cout << "Incorrect password, Please try again.\n";
		throw exception("Incorrect password");
	}
}
void System::EditProfile(string fName, string lName, string mobNum, string currPass, string newPass) {
	User* user = users[currentUserId];
	UserChangePassword(currPass, newPass, user);
	EditMobileNumber(currentUserId, mobNum);
	user->SetFirstName(fName);
	user->SetLastName(lName);
}
void System::AddToCompare(string propertyId) {
	if (propertyComparison.size() <= 3) {
		auto it = std::find(propertyComparison.begin(), propertyComparison.end(), properties[propertyId]);
		if (it == propertyComparison.end()) {
			propertyComparison.push_back(properties[propertyId]);
		}
		else {
			throw exception("Property already in comparison list");
		}
	}
	else {
		throw exception("Cannot compare more than 4 properties");
	}
}
void System::RemoveFromCompare(string propertyId) {
	auto it = std::find(propertyComparison.begin(), propertyComparison.end(), properties[propertyId]);
	if (it != propertyComparison.end()) {
		propertyComparison.erase(it);
	}
	else {
		throw exception("Property not in comparison");
	}
}
void System::handleComparison() {
	for (int i = 0; propertyComparison.size() > 0; ++i) {
		propertyComparison[i]->IncrementCompare();
		propertyFilterComparison[propertyComparison[i]->GetCompareCounter() - 1].erase(propertyComparison[i]->GetpropertyId());
		propertyFilterComparison[propertyComparison[i]->GetCompareCounter()][propertyComparison[i]->GetpropertyId()] = propertyComparison[i];
	}
}
vector<Property*> System::GetTop3Compared() {
	vector<Property*> top3Properties;
	for (auto it = propertyFilterComparison.rbegin(); it != propertyFilterComparison.rend(); ++it) {
		bool isFull = false;
		for (auto it2 = it->second.begin(); it2 != it->second.end(); ++it2) {
			top3Properties.push_back(it2->second);
			if (top3Properties.size() == 3) {
				isFull = true;
				break;
			}
		}
		if (isFull) {
			break;
		}
	}
	return top3Properties;
}
void System::AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription) {
	Admin* admin = dynamic_cast<Admin*>(users[currentUserId]);
	if (admin) {
		admin->AddProperty(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms, price, admin->GetName(), currentUserId, propertyDescription, *this);
	}
	else {
		//in case of not an admin

		users[currentUserId]->AddProperty(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms, price, users[currentUserId]->GetName(), currentUserId, propertyDescription, *this);
	}
}
void System::EditProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription, string propertyId) {
	Admin* admin = dynamic_cast<Admin*>(users[currentUserId]);
	if (admin) {
		admin->EditProperty(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms, price, currentUserName, currentUserId, propertyDescription, *this, propertyId);
	}
	else {
		users[currentUserId]->UserEditProperty(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms, price, currentUserName, *this, propertyId);
	}
}
void System::RemoveProperty(string propertyId, string currentUserId) {
	Admin* admin = dynamic_cast<Admin*>(users[currentUserId]);
	if (admin) {
		admin->RemoveProperty(propertyId, *this);
	}
	else {
		users[currentUserId]->RemoveProperty(propertyId, *this);
	}


}
map<int, unordered_map<string, Property*>> System::FilterBySquareFootage(int minSquareFootage, int maxSquareFootage) {
	if (minSquareFootage > maxSquareFootage)
		swap(minSquareFootage, maxSquareFootage);
	auto lower = propertyFilterSquareFootage.lower_bound(minSquareFootage);
	auto upper = propertyFilterSquareFootage.upper_bound(maxSquareFootage);
	map<int, unordered_map<string, Property*>> filtered;
	for (auto umap = lower; umap != upper; ++umap) {
		for (auto property = umap->second.begin(); property != umap->second.end(); property++) {
			filtered[property->second->GetSquareFootage()][property->second->GetpropertyId()] = property->second;
		}
	}
	return filtered;
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
map<int, unordered_map<string, Property*>> System::FilterByPrice(int minPrice, int maxPrice) {
	if (minPrice > maxPrice)
		swap(minPrice, maxPrice);
	auto lower = propertyFilterPrice.lower_bound(minPrice);
	auto upper = propertyFilterPrice.upper_bound(maxPrice);
	map<int, unordered_map<string, Property*>> filtered;
	for (auto umap = lower; umap != upper; ++umap) {
		for (auto property = umap->second.begin(); property != umap->second.end(); property++) {
			filtered[property->second->GetPrice()][property->second->GetpropertyId()] = property->second;
		}
	}
	return filtered;
}
void System::SortUserByPropertyCount(string nationalID) {
	User* user = GetUser(nationalID);
	// if he is in the map and we want to change his count
	if (userFilterByPropertyCount.find(user->GetUserCountProperty()) != userFilterByPropertyCount.end() &&
		userFilterByPropertyCount[user->GetUserCountProperty()]->GetNationalId() == user->GetNationalId()) {
		userFilterByPropertyCount.erase(user->GetUserCountProperty());
		++user->UserCountProperty;
		userFilterByPropertyCount.insert(make_pair(user->GetUserCountProperty(), user));
	}
	// if he is not in the map
	else {
		++user->UserCountProperty;
		userFilterByPropertyCount.insert(make_pair(user->GetUserCountProperty(), user));
	}
}
int System::UserCounter()
{
	return userCount;
}
int System::PropertiesCounter() {
	return propertiesCount;
}
void System::EditMobileNumber(string currentUserId, string newmobileNumber)
{
	if (users.find(currentUserId) != users.end())
	{
		users[currentUserId]->SetMobileNumber(newmobileNumber);
	}
	else
	{
		throw exception("User not found");
	}
}
void System::AddAdmin(string firstName, string lastName, string nationalId, string password)
{
	if (users.find(nationalId) == users.end()) {
		users[nationalId] = new Admin(firstName, lastName, nationalId, password);
		cout << "Registered Successfully " << endl;
	}
	else
	{
		cout << "ID already exists" << endl;
		throw exception("User already exists");
		//Call login
	}
}
bool System::FindUser(string nationalid) {
	if (users.find(nationalid) != users.end()) {

		return true;

	}
	return false;

}
Property* System::GetProperty(string propertyId) {
	if (properties.find(propertyId) != properties.end()) {
		return properties.find(propertyId)->second;
	}
	return nullptr;
}
User* System::GetUser(string userId) {
	if (users.find(userId) != users.end()) {
		return users.find(userId)->second;
	}
	return nullptr;
}
User* System::UserWithMostProperties() {

	if (!userFilterByPropertyCount.empty()) {
		return userFilterByPropertyCount.rbegin()->second;
	}
	else {
		return nullptr;
	}

}

