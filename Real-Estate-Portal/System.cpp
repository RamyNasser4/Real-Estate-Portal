#include "System.h"
#include "User.h"
#include "Admin.h"
#include <string>
#include <iostream>
using namespace std;
void System::SignUp(string fName, string lName, int natId, string password) {
	if (users.find(natId) == users.end()) {
		users[natId] = new User(fName, lName, natId, password);
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
};
unordered_map<int, unordered_map<string, Property*>> FilterBySquareFootage(unordered_map<int, unordered_map<string, Property*>> FilterSquareFootage, int squareFootage) {
	auto it = FilterSquareFootage.find(squareFootage);
	if (it != FilterSquareFootage.end()) {
		return { {squareFootage, it->second} };
	}
	else {
		return{};
	}
}
unordered_map<string, unordered_map<string, Property*>> FilterByLocation(unordered_map<string, unordered_map<string, Property*>> FilterLocations, string locations) {
	auto it = FilterLocations.find(locations);
	if (it != FilterLocations.end()) {
		return { {locations, it->second} };
	}
	else {
		return {};
	}
}