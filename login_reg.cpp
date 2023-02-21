// LOGIN REGISTRATION PROJECT
// so need to think about how to really work with the data that I input and how to store it effectively 
// asks username and password
// creates user file with credentials
// if user does not exist upon login, throw error

#include <iostream>
#include <string>
#include <fstream>


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

bool login(){

    // define variables
    std::string user_name;
    std::string password;

    std::cout << "Hello! Please login with your credentials";
    std::cout << "Username: ";
    std::cin >> user_name;
    std::cout << "Password: ";
    std::cin >> password;
}

bool registration(){

    // maybe check if file exists

    // opening the file 
    std::ofstream file("login_credentials.txt");

    // define variables
    std::string user_name;
    std::string password;

    // register user credentials
    std::cout << "Please register with your credentials";
    std::cout << "Username: ";
    std::cin >> user_name;
    std::cout << "Password: ";
    std::cin >> password;

    // write the credentials to file
    file << user_name;
    file << password;


}

bool check_file_exists(){
    
    // check if file exists or not
    if (file) {
        file.open("login_credentials.txt");
    }
    else {
        std::fstream file("login_credentials.txt");
    }

}


int main(){

    // need to open the file in all the functions that need it


    // open the credentials file if true
    // create the file if false
    if (check_file_exists() == true) {
        // check if this works 
        file.open("login_credentials.txt");
    }
    else {
        std::fstream file("login_credentials.txt");
    }

    // call login function
    login();

    // read file to check if those credentials are registered
    // maybe add an if statement to check if file is open before writing to it
    if (checkCredentials("login_credentials.txt", "user_name") == true) {
        registration();
    }
    else {
        std::cout << "Login successfull!";
    }

    //close the file
    file.close();

    return 0;
}