#pragma once
#include "User.h"
#include <map>
using namespace std;
class Admin : public User
{protected:
	//map<int, User*> users;
public:
	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms);
	
};

