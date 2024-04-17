#include "Admin.h"
#include "Property.h"
void Admin::AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms) {
	Property* NewProperty = new Property(Location,PropertyType,BuildingNumber,ApartmentNumber,SquareFootage,NumberOfBedrooms,true);
};