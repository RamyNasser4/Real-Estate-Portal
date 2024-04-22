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
	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms,int price, string currentUserName, int currentUserId, System &system);
	void EditProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms,int price, string currentUserName, int currentUserId, System &system,string propertyId);
	void RemoveUser(int ID, unordered_map<int, User*>& Admins);
	void RemoveProperty(string propertyId,System &system);
	string GeneratePropertyId();
	void AdminApproveorDeclineProperty(System &system, bool approve);
};

