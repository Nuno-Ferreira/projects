// LOGIN REGISTRATION PROJECT
// so need to think about how to really work with the data that I input and how to store it effectively 
// asks username and password
// creates user file with credentials
// if user does not exist upon login, throw error

#include <iostream>
#include <string>
#include <fstream>


bool checkCredentials(char* filename, char* username, char* password){

    int line_counter;
    // maybe change the name of this string and try to understand it a bit better
    std::string line;
    std::ifstream file(filename);
    file.open(filename);

    // this while loop is used to check if the searching for the word has reached the end of of the file with .eof()
    while (!file.eof()){
        getline(file, line);
        if ((line_counter = line.find(username, 0)) != std::string::npos){
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

    // login with terminal interface
    std::cout << "Hello! Please login with your credentials! \n";
    std::cout << "Username: ";
    std::cin >> user_name;
    std::cout << "Password: ";
    std::cin >> password;
}

void registration(){

    // opening the file 
    std::ofstream file("login_credentials.txt");

    // define variables
    std::string user_name;
    std::string password;

    // register user credentials
    std::cout << "Please register with your credentials! \n";
    std::cout << "Username: ";
    std::cin >> user_name;
    std::cout << "Password: ";
    std::cin >> password;

    // write the credentials to file
    file << user_name << ": ";
    file << password << "; \n";

    return user_name, password
}

bool check_file_exists(char* myfile){
    
    // get the credentials
    std::ofstream file(myfile);

    // TODO: check if this works or if I still need to change it so no redundancies happen
    // check if file exists or not
    if (file) {
        file.open(myfile);
    }
    else {
        std::fstream file(myfile);
    }

}


int main(){

    // check if file exists 
    check_file_exists("login_credentials.txt") == true;

    // call login function
    login();

    // this might not work, need to check how to carry over the variables from the login function to the check credentials function
    // TODO: still need to add another argument to insert the password
    // read file to check if those credentials are registered
    if (checkCredentials("login_credentials.txt", user_name, password) == true) {
        registration();
    }
    else {
        std::cout << "Login successfull! \n";
    }

    // need to figure out how to close the file 
    //close the file
    //file.close();

    return 0;
}