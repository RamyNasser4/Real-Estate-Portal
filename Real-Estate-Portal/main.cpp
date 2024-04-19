#include <iostream>
#include "System.h"
#include "Admin.h"
#include "User.h"
#include <fstream>
#include <sstream>
using namespace std;
void readFile(System* system) {
	fstream readFile;
	readFile.open("../users.txt", ios::out | ios::in);
	if (readFile.is_open()) {
		string data;
		while (getline(readFile, data)) {
			stringstream ss(data);
			// Declare variables for fields
			string firstName, lastName, stringId, password;
			// Split the line using '*' as the delimiter
			getline(ss, firstName, '*');
			getline(ss, lastName, '*');
			getline(ss, stringId, '*');
			getline(ss, password, '*');
			int ID = stoi(stringId);
			system->SignUp(firstName, lastName, ID, password);
		}
	}
	else {
		cout << "error" << endl;
	}
	readFile.close();
}
void writeFile(System *system) {
	fstream writefile ("../users.txt", ios::out | ios::in | ios::app);
	if (!writefile.is_open()) {
		cout << "Failed to open the file"<<endl;
		return;
	}
	for (auto it = system->GetUsers().begin(); it != system->GetUsers().end(); ++it) {
		writefile << it->second->GetFirstName() << "*" << it->second->GetLastName() << "*" << it->second->GetNationalId() << "*" << it->second->GetPassword() << endl;
	}
	writefile.close();
}
int main() {
	//test sign up and login
	System* system = new System();
	system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");
	system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");
	system->SignUp("khalifa", "Alawe", 23, "Ghazaly00");
	system->Login(12, "Koty");
	system->Login(23, "Ghazaly123");
	system->Login(23, "abdo");
	system->Login(15, "Ghazaly123");

	//test user
	User* user = new User("Sebaay", "Ashraf", 65, "koty");
	cout << user->GetFirstName() << endl;
	cout << user->GetLastName() << endl;
	cout << user->GetName() << endl;
	cout << user->GetNationalId() << endl;
	cout << user->GetPassword() << endl;
	user->SetFirstName("sebaayNew");
	user->SetLastName("AshrafNew");
	user->SetNationalId(0);
	user->SetPassword("kotyNew");
	cout << user->GetFirstName() << endl;
	cout << user->GetLastName() << endl;
	cout << user->GetName() << endl;
	cout << user->GetNationalId() << endl;
	cout << user->GetPassword() << endl;
	cout << "---------------------------------------------------------" << endl;
	/*User* admin = new Admin("Ramy", "Ramy", 1, "123");
	system->users[1] = admin;
	system->RemoveUser(1,23);
	system->Login(23, "Ghazaly123");
	system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");*/
	readFile(system);
	writeFile(system);
}