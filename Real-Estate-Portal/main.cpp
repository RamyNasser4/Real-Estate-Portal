#include <iostream>
#include "System.h"
#include "Admin.h"
#include "User.h"
#include <fstream>
#include <sstream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "Login.h"
#include "Home.h"
#include "Dialog.h"
#include "Signup.h"
#include "UserAddProperty.h"
using namespace std;
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QDialog>
#include <ctime>
void readFile(System* system) {
	fstream readFile;
	readFile.open("../users.txt", ios::out | ios::in);
	if (readFile.is_open()) {
		string data;
		while (getline(readFile, data)) {
			stringstream ss(data);
			// Declare variables for fields
			string type, firstName, lastName, stringId, password, mobileNumber;
			// Split the line using '*' as the delimiter
			getline(ss, type, '*');
			getline(ss, firstName, '*');
			getline(ss, lastName, '*');
			getline(ss, stringId, '*');
			getline(ss, password, '*');
			getline(ss, mobileNumber, '*');
			int ID = stoi(stringId);
			if (type == "admin") {
				system->AddAdmin(firstName, lastName, stringId, password, mobileNumber);
			}
			else {
				system->SignUp(firstName, lastName, stringId, password, mobileNumber);
			}
		}
	}
	else {
		cout << "error" << endl;
	}
	readFile.close();
	readFile.open("../requests.txt", ios::out | ios::in);
	if (readFile.is_open()) {
		string data;
		while (getline(readFile, data)) {
			stringstream ss(data);
			// Declare variables for fields
			// Declare variables for fields
			string propertyId, location, propertyType, city, userName, UserId;
			string AddressLine, stringSquareFootage, stringNumberOfBedrooms, stringPrice;
			string stringHighlighted, propertyDescription;
			// Split the line using '*' as the delimiter
			getline(ss, propertyId, '*');
			getline(ss, location, '*');
			getline(ss, propertyType, '*');
			getline(ss, city, '*');
			getline(ss, userName, '*');
			getline(ss, UserId, '*');
			getline(ss, AddressLine, '*');
			getline(ss, stringSquareFootage, '*');
			getline(ss, stringNumberOfBedrooms, '*');
			getline(ss, stringPrice, '*');
			getline(ss, propertyDescription, '*');
			int squareFootage = stoi(stringSquareFootage);
			int numberOfBedrooms = stoi(stringNumberOfBedrooms);
			int price = stoi(stringPrice);
			system->ReadProperty(propertyId, location, propertyType, city, AddressLine, squareFootage, numberOfBedrooms, price, userName, UserId, propertyDescription);
		}
	}
	else {
		cout << "error" << endl;
	}
	readFile.close();
	readFile.open("../properties.txt", ios::out | ios::in);
	if (readFile.is_open()) {
		string data;
		while (getline(readFile, data)) {
			stringstream ss(data);
			// Declare variables for fields
			string propertyId, location, propertyType, city, userName, UserId;
			string AddressLine, stringSquareFootage, stringNumberOfBedrooms, stringPrice, stringVerified;
			string stringHighlighted, propertyDescription;
			string stringCompareCounter;
			// Split the line using '*' as the delimiter
			getline(ss, propertyId, '*');
			getline(ss, location, '*');
			getline(ss, propertyType, '*');
			getline(ss, city, '*');
			getline(ss, userName, '*');
			getline(ss, UserId, '*');
			getline(ss, AddressLine, '*');
			getline(ss, stringSquareFootage, '*');
			getline(ss, stringNumberOfBedrooms, '*');
			getline(ss, stringPrice, '*');
			getline(ss, stringVerified, '*');
			getline(ss, stringHighlighted, '*');
			getline(ss, propertyDescription, '*');
			getline(ss, stringCompareCounter, '*');
			int squareFootage = stoi(stringSquareFootage);
			int numberOfBedrooms = stoi(stringNumberOfBedrooms);
			int price = stoi(stringPrice);
			bool verified = stoi(stringVerified);
			bool highlighted = stoi(stringHighlighted);
			int compareCounter = stoi(stringCompareCounter);
			system->ReadProperty(propertyId, location, propertyType, city, AddressLine, squareFootage, numberOfBedrooms, price, userName, UserId, highlighted, propertyDescription, compareCounter);
		}
	}
	readFile.close();
	readFile.open("../userLogs.txt", ios::out | ios::in);
	if (readFile.is_open()) {
		string data;
		while (getline(readFile, data)) {
			stringstream ss(data);
			string oldFirstName, oldLastName, oldMobileNumber, newFirstName, newLastName;
			string newMobileNumber,stringPassword,nationalID,stringTime;
			// Split the line using '*' as the delimiter
			getline(ss, oldFirstName, '*');
			getline(ss, oldLastName, '*');
			getline(ss, oldMobileNumber, '*');
			getline(ss, newFirstName, '*');
			getline(ss, newLastName, '*');
			getline(ss, newMobileNumber, '*');
			getline(ss, stringPassword, '*');
			getline(ss, nationalID, '*');
			getline(ss, stringTime, '*');
			bool password = stoi(stringPassword);
			/*tm tm = {};
			istringstream sstime(stringTime);
			char delimiter1 = '-';
			char delimiter2 = ':';
			sstime >> tm.tm_year >> delimiter1 >> tm.tm_mon >> delimiter1 >> tm.tm_mday;
			sstime >> tm.tm_hour >> delimiter2 >> tm.tm_min >> delimiter2 >> tm.tm_sec;
			time_t time = mktime(&tm);*/
			EditUserRequest* request = new EditUserRequest(oldFirstName, newFirstName, oldLastName, newLastName, oldMobileNumber, newMobileNumber, password, nationalID,stringTime);
			system->AddUserLog(request);
		}
	}
	readFile.close();
	readFile.open("../propertyLogs.txt", ios::out | ios::in);
	if (readFile.is_open()) {
		string data;
		while (getline(readFile, data)) {
			stringstream ss(data);
			string oldLocation, oldPropertyType, oldCity, oldPropertyDescription;
			string oldAddressLine,stringOldSquareFootage, stringOldNumberOfBedrooms;
			string stringOldPrice, newLocation, newPropertyType, newCity;
			string newPropertyDescription, newAddressLine, stringNewSquareFootage;
			string stringNewNumberOfBedrooms,stringNewPrice;
			string propertyId,userID,stringTime;
			// Split the line using '*' as the delimiter
			getline(ss, oldLocation, '*');
			getline(ss, oldPropertyType, '*');
			getline(ss, oldCity, '*');
			getline(ss, oldPropertyDescription, '*');
			getline(ss, oldAddressLine, '*');
			getline(ss, stringOldSquareFootage, '*');
			getline(ss, stringOldNumberOfBedrooms, '*');
			getline(ss, stringOldPrice, '*');
			getline(ss, newLocation, '*');
			getline(ss, newPropertyType, '*');
			getline(ss, newCity, '*');
			getline(ss, newPropertyDescription, '*');
			getline(ss, newAddressLine, '*');
			getline(ss, stringNewSquareFootage, '*');
			getline(ss, stringNewNumberOfBedrooms, '*');
			getline(ss, stringNewPrice, '*');
			getline(ss, propertyId, '*');
			getline(ss, userID, '*');
			getline(ss, stringTime, '*');
			int oldSquareFootage = stoi(stringOldSquareFootage);
			int oldNumberOfBedrooms = stoi(stringOldNumberOfBedrooms);
			int oldPrice = stoi(stringOldPrice);
			int newSquareFootage = stoi(stringNewSquareFootage);
			int newNumberOfBedrooms = stoi(stringNewNumberOfBedrooms);
			int newPrice = stoi(stringNewPrice);
			/*tm tm = {};
			istringstream sstime(stringTime);
			char delimiter1 = '-';
			char delimiter2 = ':';
			sstime >> tm.tm_year >> delimiter1 >> tm.tm_mon >> delimiter1 >> tm.tm_mday;
			sstime >> tm.tm_hour >> delimiter2 >> tm.tm_min >> delimiter2 >> tm.tm_sec;
			time_t time = mktime(&tm);*/
			EditPropertyRequest* request = new EditPropertyRequest(oldLocation, oldPropertyType, oldCity, oldAddressLine, oldSquareFootage, oldNumberOfBedrooms, oldPrice, oldPropertyDescription, newLocation, newPropertyType, newCity, newAddressLine, newSquareFootage, newNumberOfBedrooms, newPrice, newPropertyDescription, propertyId, userID,stringTime);
			system->AddPropertyLog(request);
		}
	}
	readFile.close();
}

void writeFile(System* system) {
	fstream writefile("../users.txt", ios::out);
	if (!writefile.is_open()) {
		cout << "Failed to open file" << endl;
		return;
	}
	const auto& users = system->GetUsers();  // Store reference to the map
	auto begin = users.begin();              // Use the same map instance for both iterators
	auto end = users.end();
	for (begin; begin != end; ++begin) {
		string type;
		Admin* admin = dynamic_cast<Admin*>(begin->second);
		if (admin) {
			type = "admin";
		}
		else {
			type = "user";
		}
		writefile << type << "*" << begin->second->GetFirstName() << "*" << begin->second->GetLastName() << "*" << begin->second->GetNationalId() << "*" << begin->second->GetPassword() << "*" << begin->second->GetMobileNumber() << endl;
	}
	writefile.close();
	writefile.open("../requests.txt", ios::out);
	if (!writefile.is_open()) {
		cout << "Failed to open file" << endl;
		return;
	}
	queue<Property*> requested = system->GetRequestedProperties();
	while (!requested.empty()) {
		writefile << requested.front()->GetpropertyId() << "*" << requested.front()->GetLocation() << "*" << requested.front()->GetPropertyType() << "*" << requested.front()->GetCity() << "*" << requested.front()->GetUserName() << "*" << requested.front()->GetUserId() << "*" << requested.front()->GetAddressLine() << "*" << requested.front()->GetSquareFootage() << "*" << requested.front()->GetNumberOfBedrooms() << "*" << requested.front()->GetPrice() << "*" << requested.front()->GetPropertyDescription() << endl;
		requested.pop();
	}
	writefile.close();
	writefile.open("../properties.txt", ios::out);
	if (!writefile.is_open()) {
		cout << "Failed to open file" << endl;
		return;
	}
	const auto& properties = system->GetProperties();
	auto beginp = properties.begin();
	auto endp = properties.end();
	for (beginp; beginp != endp; beginp++) {
		if (!beginp->second->GetVerfied()) {
			continue;
		}
		writefile << beginp->second->GetpropertyId() << "*" << beginp->second->GetLocation() << "*" << beginp->second->GetPropertyType() << "*" << beginp->second->GetCity() << "*" << beginp->second->GetUserName() << "*" << beginp->second->GetUserId() << "*" << beginp->second->GetAddressLine() << "*" << beginp->second->GetSquareFootage() << "*" << beginp->second->GetNumberOfBedrooms() << "*" << beginp->second->GetPrice() << "*" << beginp->second->GetVerfied() << "*" << beginp->second->GetHighlighted() << "*" << beginp->second->GetPropertyDescription() << "*" << beginp->second->GetCompareCounter() << endl;
	}
	writefile.close();
	writefile.open("../userLogs.txt", ios::out);
	if (!writefile.is_open()) {
		cout << "Failed to open file" << endl;
		return;
	}
	const auto& userLogs = system->GetUserLogs();
	auto beginUserLogs = userLogs.begin();
	auto endUserLogs = userLogs.end();
	for (beginUserLogs; beginUserLogs != endUserLogs; beginUserLogs++) {
		//time_t tDate = (*beginUserLogs)->GetTime();
		//char buffer[26]; // Enough space to hold the string representation of time
		//size_t bufferSize = sizeof(buffer);
		//const char* format = "%Y-%m-%d %H:%M:%S" /**/;
		//struct tm timeInfo;
		//localtime_s(&timeInfo, &tDate);
		//strftime(buffer, sizeof(buffer), format, &timeInfo);
		string strDate = (*beginUserLogs)->GetTime();
		writefile << (*beginUserLogs)->GetOldFirstName() << "*" << (*beginUserLogs)->GetOldLastName() << "*" << (*beginUserLogs)->GetOldMobileNumber() << "*" << (*beginUserLogs)->GetNewFirstName() << "*" << (*beginUserLogs)->GetNewLastName() << "*" << (*beginUserLogs)->GetNewMobileNumber() << "*" <<  (*beginUserLogs)->GetPasswordChanged() <<  "*" << (*beginUserLogs)->GetNationalId() << "*" << strDate << endl;
	}
	writefile.close();
	writefile.open("../propertyLogs.txt", ios::out);
	if (!writefile.is_open()) {
		cout << "Failed to open file" << endl;
		return;
	}
	const auto& propertyLogs = system->GetPropertyLogs();
	auto beginPropertyLogs = propertyLogs.begin();
	auto endPropertyLogs = propertyLogs.end();
	for (beginPropertyLogs; beginPropertyLogs != endPropertyLogs; beginPropertyLogs++) {
		//time_t tDate = (*beginPropertyLogs)->GetTime();
		//char buffer[26]; // Enough space to hold the string representation of time
		//size_t bufferSize = sizeof(buffer);
		//const char* format = "%Y-%m-%d %H:%M:%S" /**/;
		//struct tm timeInfo;
		//localtime_s(&timeInfo, &tDate);
		//strftime(buffer, sizeof(buffer), format, &timeInfo);
		string strDate = (*beginPropertyLogs)->GetTime();
		writefile << (*beginPropertyLogs)->GetOldLocation() << "*" << (*beginPropertyLogs)->GetOldPropertyType() << "*" << (*beginPropertyLogs)->GetOldCity() << "*" << (*beginPropertyLogs)->GetOldPropertyDescription() << "*" << (*beginPropertyLogs)->GetOldAddressLine() << "*" << (*beginPropertyLogs)->GetOldSquareFootage() << "*" << (*beginPropertyLogs)->GetOldNumberOfBedrooms() << "*" << (*beginPropertyLogs)->GetOldPrice() <<  "*" << (*beginPropertyLogs)->GetNewLocation() << "*" << (*beginPropertyLogs)->GetNewPropertyType() << "*" << (*beginPropertyLogs)->GetNewCity() << "*" << (*beginPropertyLogs)->GetNewPropertyDescription() << "*" << (*beginPropertyLogs)->GetNewAddressLine() << "*" << (*beginPropertyLogs)->GetNewSquareFootage() << "*" << (*beginPropertyLogs)->GetNewNumberOfBedrooms() << "*" << (*beginPropertyLogs)->GetNewPrice() << "*" << (*beginPropertyLogs)->GetPropertyId() << "*" << (*beginPropertyLogs)->GetUserId() << "*" << strDate << endl;
	}
	writefile.close();
}
int main(int argc, char* argv[]) {
	//test sign up and login
	System* system = new System();
	//system->SignUp("Ramy", "Khalifa", "23", "123", "2123");
	//system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");
	//system->SignUp("khalifa", "Alawe", 23, "Ghazaly00");
	//system->Login(12, "Koty");
	//system->Login(23, "Ghazaly123");
	//system->Login(23, "abdo");
	//system->Login(15, "Ghazaly123");

	//test user
	//User* user = new User("Sebaay", "Ashraf", 65, "koty");
	//system->SignUp("Sebaay", "Ashraf", 65, "koty", "23123");
	//cout << user->GetFirstName() << endl;
	// 
	// 
	//cout << user->GetLastName() << endl;
	//cout << user->GetName() << endl;
	//cout << user->GetNationalId() << endl;
	//cout << user->GetPassword() << endl;
	//user->SetFirstName("sebaayNew");
	//user->SetLastName("AshrafNew");
	//user->SetNationalId(0);
	//user->SetPassword("kotyNew");
	//cout << user->GetFirstName() << endl;
	//cout << user->GetLastName() << endl;
	//cout << user->GetName() << endl;
	//cout << user->GetNationalId() << endl;
	//cout << user->GetPassword() << endl;
	//cout << "---------------------------------------------------------" << endl;
	/*User* admin = new Admin("Ramy", "Ramy", "1", "123", "01002323145");
	system->users["1"] = admin;
	system->userCount++;
	system->AddProperty("egypt", "villa", "14", "4", 7, 4, 7000, "Ramy Khalifa", "23", "this is property");
	system->AddProperty("eg", "villa", "14", "4", 7, 8, 1000, "Ramy Khalifa", "1", "this is property");
	system->AddProperty("eg", "appartment", "14", "9", 7, 4, 2000, "Ramy Khalifa", "1", "this is property");
	system->AddProperty("egypt", "villa", "14", "4", 1, 4, 3000, "Ramy Khalifa", "1", "this is property");
	system->AddProperty("egy", "villa", "14", "4", 9, 4, 4000, "Ramy Khalifa", "1", "this is property");
	system->AddProperty("egy", "school", "14", "4", 4, 4, 5000, "Ramy Khalifa", "1", "this is property");
	system->AddProperty("egy", "garage", "14", "4", 3, 4, 6000, "Ramy Khalifa", "1", "this is property");
	system->AddProperty("egypt", "villa", "14", "4", 7, 4, 100000, "Ramy Khalifa", "23", "this is property");
	system->FilterByLocation("eg");
	system->FilterByLocation("ep");
	system->FilterByNumberOfBedrooms(4);
	system->FilterByNumberOfBedrooms(9);
	system->FilterByNumberOfBedrooms(20);
	system->FilterByPrice(1000, 200);
	system->FilterByPrice(2000, 1000);
	system->FilterByPrice(4000, 6000);*/
	/*system->FilterBySquareFootage(7);
	system->FilterBySquareFootage(70);*/
	//system->FilterByType("villa");
	//system->FilterByType("school");
	//system->FilterByType("pool");
	//test for userAddProperty
	//system->Login("23", "123");
	//cout << system->UserCounter() << endl;
	//system->RemoveUser(1,23);
	//cout << system->UserCounter() << endl;
	/*system->Login(23, "Ghazaly123");
	system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");*/
	//readFile(system);
	//writeFile(system);
	readFile(system);
	QApplication a(argc, argv);
	QStackedWidget* widget = new QStackedWidget();
	Login* login = new Login();
	login->setObjectName("Login");
	Home* home = new Home();
	Signup* signup = new Signup();
	//UserAddProperty* req = new UserAddProperty(widget);
	//Home* home = new Home();
	widget->addWidget(login);
	widget->addWidget(home);
	widget->addWidget(signup);
	widget->setCurrentWidget(login);
	login->setupUi(widget, system, home, signup);
	//widget->setCurrentWidget(req);
	//req->setupUi(widget, system);
	QObject::connect(&a, &QApplication::aboutToQuit, [=]() {
		writeFile(system);
		});

	widget->show();
	return a.exec();
}