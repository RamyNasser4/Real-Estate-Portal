#include "EditPropertyRequest.h"
#include<string>
#include<string.h>
#include<ctime>
using namespace std;
EditPropertyRequest::EditPropertyRequest(string OldLocation, string OldPropertyType, string OldBuildingNumber, int OldApartmentNumber, int OldSquareFootage, int OldNumberOfBedrooms, int Oldprice, string OldpropertyDescription, string NewLocation, string NewPropertyType, string NewBuildingNumber, int NewApartmentNumber, int NewSquareFootage, int NewNumberOfBedrooms, int Newprice, string NewpropertyDescription,string PropertyID,string userID)
{
	this->Oldlocation = OldLocation;
	this->OldpropertyType = OldPropertyType;
	this->OldbuildingNumber = OldBuildingNumber;
	this->OldapartmentNumber = OldApartmentNumber;
	this->OldsquareFootage = OldSquareFootage;
	this->OldnumberOfBedrooms = OldNumberOfBedrooms;
	this->Oldprice = Oldprice;
	this->OldpropertyDescription = OldpropertyDescription;
	 
	this->Newlocation = NewLocation;
	this->NewpropertyType = NewPropertyType;
	this->NewbuildingNumber = NewBuildingNumber;
	this->NewapartmentNumber = NewApartmentNumber;
	this->NewsquareFootage = NewSquareFootage;
	this->NewnumberOfBedrooms = NewNumberOfBedrooms;
	this->Newprice = Newprice;
	this->NewpropertyDescription = NewpropertyDescription;

	this->CurrentTime = time(&CurrentTime);
	this->PropertyID = PropertyID;
	this->userID = userID;
}

	//setters 
void EditPropertyRequest::setOldLocation(string OldLocation)
{
	this->Oldlocation = OldLocation;
}

void EditPropertyRequest::SetOldPropertyType(string OldPropertyType) {
	this->OldpropertyType = OldPropertyType;
}

void EditPropertyRequest::SetOldBuildingNumber(string OldBuildingNumber) {
	this->OldbuildingNumber = OldBuildingNumber;
}

void EditPropertyRequest::SetOldUserName(string OldUserName) {
	this->OlduserName = OldUserName;
}

void EditPropertyRequest::SetOldPropertyDescription(string OldPropertyDescription) {
	this->OldpropertyDescription = OldPropertyDescription;
}

void EditPropertyRequest::SetOldApartmentNumber(int OldApartmentNumber) {
	this->OldapartmentNumber = OldApartmentNumber;
}

void EditPropertyRequest::SetOldSquareFootage(int OldSquareFootage) {
	this->OldsquareFootage = OldSquareFootage;
}

void EditPropertyRequest::SetOldNumberOfBedrooms(int OldNumberOfBedrooms) {
	this->OldnumberOfBedrooms = OldNumberOfBedrooms;
}

void EditPropertyRequest::SetOldPrice(int OldPrice) {
	this->Oldprice = OldPrice;
}

void EditPropertyRequest::SetNewLocation(string NewLocation) {
	this->Newlocation = NewLocation;
}

void EditPropertyRequest::SetNewPropertyType(string NewPropertyType) {
	this->NewpropertyType = NewPropertyType;
}

void EditPropertyRequest::SetNewBuildingNumber(string NewBuildingNumber) {
	this->NewbuildingNumber = NewBuildingNumber;
}

void EditPropertyRequest::SetNewUserName(string NewUserName) {
	this->NewuserName = NewUserName;
}

void EditPropertyRequest::SetNewPropertyDescription(string NewPropertyDescription) {
	this->NewpropertyDescription = NewPropertyDescription;
}

void EditPropertyRequest::SetNewApartmentNumber(int NewApartmentNumber) {
	this->NewapartmentNumber = NewApartmentNumber;
}

void EditPropertyRequest::SetNewSquareFootage(int NewSquareFootage) {
	this->NewsquareFootage = NewSquareFootage;
}

void EditPropertyRequest::SetNewNumberOfBedrooms(int NewNumberOfBedrooms) {
	this->NewnumberOfBedrooms = NewNumberOfBedrooms;
}

void EditPropertyRequest::SetNewPrice(int NewPrice) {
	this->Newprice = NewPrice;
}


// getters
 

string EditPropertyRequest::GetOldLocation() {
	return Oldlocation;
}

string EditPropertyRequest::GetOldPropertyType() {
	return OldpropertyType;
}

string EditPropertyRequest::GetOldBuildingNumber() {
	return OldbuildingNumber;
}

string EditPropertyRequest::GetOldPropertyDescription() {
	return OldpropertyDescription;
}
string EditPropertyRequest::GetPropertyId() {
	return PropertyID;
}
string EditPropertyRequest::GetUserId() {
	return userID;
}
int EditPropertyRequest::GetOldApartmentNumber() {
	return OldapartmentNumber;
}

int EditPropertyRequest::GetOldSquareFootage() {
	return OldsquareFootage;
}

int EditPropertyRequest::GetOldNumberOfBedrooms() {
	return OldnumberOfBedrooms;
}

int EditPropertyRequest::GetOldPrice() {
	return Oldprice;
}

string EditPropertyRequest::GetNewLocation() {
	return Newlocation;
}

string EditPropertyRequest::GetNewPropertyType() {
	return NewpropertyType;
}

string EditPropertyRequest::GetNewBuildingNumber() {
	return NewbuildingNumber;
}

string EditPropertyRequest::GetNewPropertyDescription() {
	return NewpropertyDescription;
}

int EditPropertyRequest::GetNewApartmentNumber() {
	return NewapartmentNumber;
}

int EditPropertyRequest::GetNewSquareFootage() {
	return NewsquareFootage;
}

int EditPropertyRequest::GetNewNumberOfBedrooms() {
	return NewnumberOfBedrooms;
}

int EditPropertyRequest::GetNewPrice() {
	return Newprice;
}
time_t EditPropertyRequest::GetTime() {
	return CurrentTime;
}
