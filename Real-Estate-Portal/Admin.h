#pragma once
#include "User.h"
#include "System.h"
#include <unordered_map>
using namespace std;
class Admin : public User
{
protected:
	//map<int, Admin*> Admins;
public:
	Admin();
	Admin(string firstName, string lastName, int nationalId, string password);
	Admin(string firstName, string lastName, int nationalId);
	Admin(string firstName, string lastName);
	Admin(string firstName);
	Admin(const Admin& other);
	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, int currentUserId, System system);
	void RemoveUser(int ID, unordered_map<int, User*>& Admins);
};

