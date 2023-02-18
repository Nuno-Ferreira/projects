// LOGIN REGISTRATION PROJECT
// so need to think about how to really work with the data that I input and how to store it effectively 
// asks username and password
// creates user file with credentials
// if user does not exist upon login, throw error

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool checkCredentials(char* filename, char* word){

}

int main(){
    // define variables
    string user_name;
    string password;

    // create login credentials file
    fstream file("login_credentials.txt");

    // check if file exists or not
    if (file) {
        file.open("login_credentials.txt");
    }
    else {
        fstream file("login_credentials.txt");
    }


    // terminal interface for login
    cout << "Hello! Please login with your credentials";
    cout << "Username: ";
    cin >> user_name;
    cout << "Password: ";
    cin >> password;

    // add a function to check if the credentials are in file 


    // read file to check if those credentials are registered
    // maybe add an if statement to check if file is open before writing to it
    if (checkCredentials(file, user_name) = true) {

        // register user credentials
        cout << "Hello! Please login with your credentials";
        cout << "Username: ";
        cin >> user_name;
        cout << "Password: ";
        cin >> password;

        // write the credentials to file
        file << user_name;
        file << password;

    }
    else {
        cout << "Login successfull!";
    }

    // need to have a second part to do the registration

    //close the file
    file.close();

    return 0;
}