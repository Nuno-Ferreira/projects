// LOGIN REGISTRATION PROJECT
// so need to think about how to really work with the data that I input and how to store it effectively 
// asks username and password
// creates user file with credentials
// if user does not exist upon login, throw error

#include <iostream>
#include <string>
#include <fstream>

//using namespace std;

// need to have a second part to do the registration
// maybe add a function called registration 

// set the login as a function - then set the main to just call the functions

bool checkCredentials(char* filename, char* word){

    int line_counter;
    // maybe change the name of this string and try to understand it a bit better
    std::string line;
    std::ifstream file(filename);
    file.open(filename);

    // this while loop is used to check if the searching for the word has reached the end of of the file with .eof()
    while (!file.eof()){
        getline(file, line);
        if ((line_counter = line.find(word, 0)) != std::string::npos){
            file.close();
            return true;
        }
        else {
            return false;
        }
    }
    file.close();

}

int main(){
    // define variables
    std::string user_name;
    std::string password;

    // create login credentials file
    std::fstream file("login_credentials.txt");

    // check if file exists or not
    if (file) {
        file.open("login_credentials.txt");
    }
    else {
        std::fstream file("login_credentials.txt");
    }


    // terminal interface for login
    std::cout << "Hello! Please login with your credentials";
    std::cout << "Username: ";
    std::cin >> user_name;
    std::cout << "Password: ";
    std::cin >> password;

    // add a function to check if the credentials are in file 


    // read file to check if those credentials are registered
    // maybe add an if statement to check if file is open before writing to it
    if (checkCredentials("login_credentials.txt", "user_name") == true) {

        // register user credentials
        std::cout << "Hello! Please login with your credentials";
        std::cout << "Username: ";
        std::cin >> user_name;
        std::cout << "Password: ";
        std::cin >> password;

        // write the credentials to file
        file << user_name;
        file << password;

    }
    else {
        std::cout << "Login successfull!";
    }

    //close the file
    file.close();

    return 0;
}