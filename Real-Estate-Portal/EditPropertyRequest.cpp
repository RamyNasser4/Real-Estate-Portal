#include "EditPropertyRequest.h"
#include<string>
#include<string.h>
#include<ctime>
using namespace std;
EditPropertyRequest::EditPropertyRequest(string OldLocation, string OldPropertyType, string OldCity, string OldAddressLine, int OldSquareFootage, int OldNumberOfBedrooms, int Oldprice, string OldpropertyDescription, string NewLocation, string NewPropertyType, string NewCity, string NewAddressLine, int NewSquareFootage, int NewNumberOfBedrooms, int Newprice, string NewpropertyDescription,string PropertyID,string userID)
{
	this->Oldlocation = OldLocation;
	this->OldpropertyType = OldPropertyType;
	this->Oldcity = OldCity;
	this->OldaddressLine = OldAddressLine;
	this->OldsquareFootage = OldSquareFootage;
	this->OldnumberOfBedrooms = OldNumberOfBedrooms;
	this->Oldprice = Oldprice;
	this->OldpropertyDescription = OldpropertyDescription;
	 
	this->Newlocation = NewLocation;
	this->NewpropertyType = NewPropertyType;
	this->Newcity = NewCity;
	this->NewaddressLine = NewAddressLine;
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

void EditPropertyRequest::SetOldCity(string OldCity) {
	this->Oldcity = OldCity;
}

void EditPropertyRequest::SetOldUserName(string OldUserName) {
	this->OlduserName = OldUserName;
}

void EditPropertyRequest::SetOldPropertyDescription(string OldPropertyDescription) {
	this->OldpropertyDescription = OldPropertyDescription;
}

void EditPropertyRequest::SetOldAddressLine(string OldAddressLine) {
	this->OldaddressLine = OldAddressLine;
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

void EditPropertyRequest::SetNewCity(string NewCity) {
	this->Newcity = NewCity;
}

void EditPropertyRequest::SetNewUserName(string NewUserName) {
	this->NewuserName = NewUserName;
}

void EditPropertyRequest::SetNewPropertyDescription(string NewPropertyDescription) {
	this->NewpropertyDescription = NewPropertyDescription;
}

void EditPropertyRequest::SetNewAddressLine(string NewAddressLine) {
	this->NewaddressLine = NewAddressLine;
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

string EditPropertyRequest::GetOldCity() {
	return Oldcity;
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
string EditPropertyRequest::GetOldAddressLine() {
	return OldaddressLine;
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

string EditPropertyRequest::GetNewCity() {
	return Newcity;
}

string EditPropertyRequest::GetNewPropertyDescription() {
	return NewpropertyDescription;
}

string EditPropertyRequest::GetNewAddressLine() {
	return NewaddressLine;
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
