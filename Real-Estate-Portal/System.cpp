#include "System.h"
#include "User.h"
#include "Admin.h"
#include <string>
#include <iostream>
using namespace std;
void System::SignUp(string fName, string lName, int natId, string password) {
    if (users.find(natId) == users.end()) {
        users[natId] = new User(fName,lName,natId,password);
        cout << "Registered Successfully " << endl;
    }
    else {
        cout << "User already exists" << endl;
        //Call login
    }
}
void System::Login(int ID,string password) {
    if (users.find(ID) == users.end()) {
        //Call Sign Up
        cout << "User is not Registered to system" << " " << "Sign Up " << endl;
    }
    else {
        Admin* admin = dynamic_cast<Admin*>(users[ID]);
        if (users[ID]->GetPassword() == password) {
            if (admin) {
                cout << "Admin Signed In" << endl;
            }
            else {
                cout << "User Signed In" << endl;
            }
        }
        else {
            cout << "Invalid National ID or Password" << endl;
        }
    }
}
void System::RemoveUser(int ID) {
    if (users.find(ID) == users.end()) {
        cout << "this ID is not registered on the system." << endl;
    }
    else {
       // Admin* admin = dynamic_cast<Admin*>(users[ID]);
       // if (users[ID]->GetNationalId() == ID) {
           // if (admin) {

                users.erase(ID);
                cout << "User Successfully Deleted." << endl;
            //}
       // }
    }
};