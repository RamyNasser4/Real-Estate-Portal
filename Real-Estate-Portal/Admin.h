#pragma once
#include "User.h"
using namespace std;
class Admin : public User
{

public:
	void AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms);
};

