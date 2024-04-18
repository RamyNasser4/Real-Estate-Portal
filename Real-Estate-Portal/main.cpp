#include <iostream>
#include "System.h"
#include "Admin.h"
#include "User.h"
using namespace std;
int main() {
	//test sign up and login
	System* system = new System();
	system->SignUp("Ramy", "Khalifa",23,"Ghazaly123");
	system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");
	system->SignUp("khalifa", "Alawe", 23, "Ghazaly00");
	system->Login(12,"Koty");
	system->Login(23, "Ghazaly123");
	system->Login(23, "abdo");
	system->Login(15, "Ghazaly123");
	
	//test user
	User* user= new User("Sebaay","Ashraf",65,"koty");
	cout << user->GetFirstName()<<endl;
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
	
}