#include "EditProperty.h"
#include <string>
using namespace std;
EditProperty::EditProperty(string OldLocation, string OldPropertyType, string OldBuildingNumber, int OldApartmentNumber, int OldSquareFootage, int OldNumberOfBedrooms,int Oldprice,string OLdpropertyDescription, string NewLocation, string NewPropertyType, string NewBuildingNumber, int NewApartmentNumber, int NewSquareFootage, int NewNumberOfBedrooms, int Newprice, string NewpropertyDescription)
{
	this->Oldlocation =            OldLocation;
	this->OldpropertyType =        OldPropertyType;
	this->OldbuildingNumber =      OldBuildingNumber;
	this->OldapartmentNumber =     OldApartmentNumber;
	this->OldsquareFootage =       OldSquareFootage;
	this->OldnumberOfBedrooms =    OldNumberOfBedrooms;
	this->Oldprice =               Oldprice;
	this->OldpropertyDescription = OldpropertyDescription;

	this->Newlocation =            NewLocation;
	this->NewpropertyType =        NewPropertyType;
	this->NewbuildingNumber =      NewBuildingNumber;
	this->NewapartmentNumber =     NewApartmentNumber;
	this->NewsquareFootage =       NewSquareFootage;
	this->NewnumberOfBedrooms =    NewNumberOfBedrooms;
	this->Newprice =               Newprice;
	this->NewpropertyDescription = NewpropertyDescription;

}								   