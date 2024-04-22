#include <iostream>
#include "System.h"
#include "Admin.h"
#include "User.h"
#include <fstream>
#include <sstream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "Login.h"
#include "Sidebar.h"
#include "Propertycard.h"
using namespace std;
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
void readFile(System* system) {
	fstream readFile;
	readFile.open("../users.txt", ios::out | ios::in);
	if (readFile.is_open()) {
		string data;
		while (getline(readFile, data)) {
			stringstream ss(data);
			// Declare variables for fields
			string firstName, lastName, stringId, password,mobileNumber;
			// Split the line using '*' as the delimiter
			getline(ss, firstName, '*');
			getline(ss, lastName, '*');
			getline(ss, stringId, '*');
			getline(ss, password, '*');
			getline(ss, mobileNumber, '*');
			int ID = stoi(stringId);
			system->SignUp(firstName, lastName, ID, password,mobileNumber);
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
			string propertyId,location,propertyType,buildingNumber,userName,stringUserId;
			string stringApartmentNumber,stringSquareFootage,stringNumberOfBedrooms,stringPrice,stringVerified;
			string stringHighlighted;
			// Split the line using '*' as the delimiter
			getline(ss, propertyId, '*');
			getline(ss, location, '*');
			getline(ss, propertyType, '*');
			getline(ss, buildingNumber, '*');
			getline(ss, userName, '*');
			getline(ss, stringUserId, '*');
			getline(ss, stringApartmentNumber, '*');
			getline(ss, stringSquareFootage, '*');
			getline(ss, stringNumberOfBedrooms, '*');
			getline(ss, stringPrice, '*');
			getline(ss, stringVerified, '*');
			getline(ss, stringHighlighted, '*');
			int userId = stoi(stringUserId);
			int apartmentNumber = stoi(stringApartmentNumber);
			int squareFootage = stoi(stringSquareFootage);
			int numberOfBedrooms = stoi(stringNumberOfBedrooms);
			int price = stoi(stringPrice);
			bool verified = stoi(stringVerified);
			bool highlighted = stoi(stringHighlighted);
			//system.addProperty
		}
	}
	readFile.close();
}
void writeFile(System* system) {
	fstream writefile("../users.txt", ios::out );
	if (!writefile.is_open()) {
		cout << "Failed to open file" << endl;
		return;
	}
	const auto& users = system->GetUsers();  // Store reference to the map
	auto begin = users.begin();              // Use the same map instance for both iterators
	auto end = users.end();
	for (; begin != end; ++begin) {
		
		writefile <<begin->second->GetFirstName() << "*" << begin->second->GetLastName() << "*" << begin->second->GetNationalId() << "*" << begin->second->GetPassword() << endl;
	}
	writefile.close();

	//writefile.open("../properties.txt", ios::out);
	fstream writefile("../properties.txt", ios::out);
	if (!writefile.is_open()) {
		cout << "Failed to open file" << endl;
		return;
	}
	const auto& properties = system->GetProperties();
	auto beginp = properties.begin();
	auto endp = properties.end();
	for (; beginp != endp; beginp++) {
		//writefile << beginp->second->GetpropertyId() << "*" << beginp->second->GetLocation() << "*" << beginp->second->GetPropertyType() << "*" << beginp->second->GetBuildingNumber() << "*" << beginp->second->GetUserName() << "*" << beginp->second->GetUserId() << "*" << beginp->second->GetApartmentNumber() << "*" << beginp->second->GetSquareFootage() << "*" << beginp->second->GetNumberOfBedrooms() << "*" << beginp->second->GetPrice() << "*" << beginp->second->GetVerfied() << "*"<<beginp->second->GetHighlighted()<<endl;
	}
	writefile.close();
}
int main(int argc, char* argv[]) {
	//test sign up and login
	System* system = new System();
	system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123","2123");
	//system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");
	//system->SignUp("khalifa", "Alawe", 23, "Ghazaly00");
	//system->Login(12, "Koty");
	//system->Login(23, "Ghazaly123");
	//system->Login(23, "abdo");
	//system->Login(15, "Ghazaly123");

	//test user
	//User* user = new User("Sebaay", "Ashraf", 65, "koty");
	system->SignUp("Sebaay", "Ashraf", 65, "koty", "23123");
	//cout << user->GetFirstName() << endl;
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
	User* admin = new Admin("Ramy", "Ramy", 1, "123");
	system->users[1] = admin;
	cout << system->UserCounter() << endl;
	system->RemoveUser(1,23);
	cout << system->UserCounter() << endl;
	/*system->Login(23, "Ghazaly123");
	system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");*/
	//readFile(system);
	//writeFile(system);
	QApplication a(argc, argv);
	QWidget* widget = new QWidget();
    Login login;
    login.setupUi(widget);
	Propertycard propertycard;
	propertycard.setupUi(widget);
	widget->show();
    QMainWindow* window = new QMainWindow();
    Sidebar sidebar;
    sidebar.setupUi(window);
    window->show();
	return a.exec();
}
//Property Card GUI


/*#ifndef WIDGETXJMUMX_H
#define WIDGETXJMUMX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget* PropertyCard;
    QLabel* label;
    QLabel* label_2;
    QLabel* label_3;
    QLabel* label_4;
    QLabel* label_5;
    QLabel* label_6;
    QLabel* label_7;
    QLabel* label_8;

    void setupUi(QWidget* Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(248, 298);
        PropertyCard = new QWidget(Form);
        PropertyCard->setObjectName("PropertyCard");
        PropertyCard->setGeometry(QRect(0, 0, 250, 300));
        label = new QLabel(PropertyCard);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 101, 20));
        label_2 = new QLabel(PropertyCard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 270, 49, 16));
        label_3 = new QLabel(PropertyCard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 70, 49, 16));
        label_4 = new QLabel(PropertyCard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 100, 71, 20));
        label_5 = new QLabel(PropertyCard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 220, 71, 20));
        label_6 = new QLabel(PropertyCard);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 190, 91, 21));
        label_7 = new QLabel(PropertyCard);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 160, 91, 21));
        label_8 = new QLabel(PropertyCard);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 130, 91, 20));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget* Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "Property Type", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "xxx ft", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Location:", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Building No:", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "Added By:", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "Contact Number:", nullptr));
        label_7->setText(QCoreApplication::translate("Form", "Price:", nullptr));
        label_8->setText(QCoreApplication::translate("Form", "Appartment No:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form : public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WIDGETXJMUMX_H

*/