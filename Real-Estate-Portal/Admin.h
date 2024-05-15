#pragma once
#include "User.h"
#include <unordered_map>
using namespace std;
class Admin : public User
{
protected:
public:
	Admin();
	Admin(string firstName, string lastName, string nationalId, string password,string mobileNumber);
	Admin(string firstName, string lastName, string nationalId, string password);
	Admin(string firstName, string lastName, string nationalId);
	Admin(string firstName, string lastName);
	Admin(string firstName);
	Admin(const Admin& other);

	void AddProperty(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription, System& system);
	void EditProperty(string Location, string PropertyType, string City, string AddressLine, int SquareFootage, int NumberOfBedrooms, int price, string currentUserName, string currentUserId, string propertyDescription, System& system, string propertyId);
	void RemoveUser(string ID, System& system);
	void RemoveProperty(string propertyId,System &system);

	void AdminApproveorDeclineProperty(System* system, bool approve,User* user);
	void HighlightProperty(string propertyId, System* system);
	void RemoveHighlight(string propretyId, System* system);
};

