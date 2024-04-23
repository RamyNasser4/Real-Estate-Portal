#pragma once
#include "User.h"
#include <unordered_map>
using namespace std;
class Admin : public User
{
protected:
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
	void AdminApproveorDeclineProperty(System &system, bool approve);
	void HighlightProperty(string propretyId, System& system);
	void RemoveHighlight(string propretyId, System& system);
};

