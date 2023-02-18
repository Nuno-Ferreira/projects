// LOGIN REGISTRATION PROJECT
// so need to think about how to really work with the data that I input and how to store it effectively 
// asks username and password
// creates user file with credentials
// if user does not exist upon login, throw error

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    // define variables
    string user_name;
    string password;

    // create login credentials file
    FILE* fp = fopen("~/Documents/projects/login_credentials.txt","w+");


    cout << "Hello! Please login with your credentials";
    cout << "Username: ";
    cin >> user_name;
    cout << "Password: ";
    cin >> password;
    // need to add an if statement to check if the user is registered
    // need to have a second part to do the registration
    // need to add a part to create the file to add the login credentials to

}