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

	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, int currentUserId, string propertyDescription, System& system);
	void EditProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, int currentUserId, string propertyDescription, System& system, string propertyId);
	void RemoveUser(int ID, System& system);
	void RemoveProperty(string propertyId,System &system);

	void AdminApproveorDeclineProperty(System &system, bool approve);
	void HighlightProperty(string propertyId, System& system);
	void RemoveHighlight(string propretyId, System& syste);
};

