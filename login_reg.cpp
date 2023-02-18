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
    FILE* file = fopen("~/Documents/projects/login_credentials.txt","r+");

    // check if file exists or not
    if (file!=NULL) {
        file = fopen("~/Documents/projects/login_credentials.txt","r+");
    }
    else {
        file = fopen("~/Documents/projects/login_credentials.txt","w+");
    }
    

    // terminal interface for login
    cout << "Hello! Please login with your credentials";
    cout << "Username: ";
    cin >> user_name;
    cout << "Password: ";
    cin >> password;


    // read file to check if those credentials are registered
    // maybe add an if statement to check if file is open before writing to it
    if (user_name and password == file) {

        // register user credentials
        cout << "Hello! Please login with your credentials";
        cout << "Username: ";
        cin >> user_name;
        cout << "Password: ";
        cin >> password;

        // write the credentials to file
        file >> user_name;
        file >> password;

    }
    else {
        cout << "Login successfull!";
    }

    // need to have a second part to do the registration

    //close the file
    fclose(file);

    return 0;
}