#include "Admin.h"
#include "Property.h"
#include "User.h"
#include "System.h"
#include <string>
using namespace std;
Admin::Admin(string firstName, string lastName, int nationalId, string password) : User(firstName, lastName, nationalId, password) {

}
Admin::Admin(string firstName, string lastName, int nationalId) {
	Admin(firstName, lastName, nationalId, "");
}
Admin::Admin(string firstName, string lastName) {
	Admin(firstName, lastName, 0);
}
Admin::Admin(string firstName) {
	Admin(firstName, "");
}
Admin::Admin() {
	Admin("");
}
Admin::Admin(const Admin& admin) : User((User)admin) {

}
void Admin::AddProperty(string Location, string PropertyType, string BuildingNumber, int ApartmentNumber, int SquareFootage, int NumberOfBedrooms, bool verified, int price, string currentUserName, int currentUserId) {
	Property* NewProperty = new Property(Location, PropertyType, BuildingNumber, ApartmentNumber, SquareFootage, NumberOfBedrooms,true,price,currentUserName,currentUserId);
	string propertyId = ApartmentNumber + " " + BuildingNumber + " " + Location;
	/*System::propertyFilterSquareFootage[SquareFootage][propertyId] = NewProperty;
	System::propertyFilterLocations[Location][propertyId] = NewProperty;
	System::propertyFilterType[PropertyType][propertyId] = NewProperty;
	System::propertyFilterBedRooms[NumberOfBedrooms][propertyId] = NewProperty;*/
};
void Admin::RemoveUser(int ID, unordered_map<int, User*>& users) {
	if (users.find(ID) == users.end()) {
		cout << "this ID is not registered on the system." << endl;
	}
	else {
		users.erase(ID);
		cout << "User Successfully Deleted." << endl;
	}
}
