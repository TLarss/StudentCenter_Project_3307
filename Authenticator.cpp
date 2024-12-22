#include "Authenticator.h"
using namespace std;

// ||| SINGLETON |||

// constructor
Authenticator::Authenticator() {}

// getter for instance, if the authenticator is not initialized, it creates the instance then returns it
Authenticator* Authenticator::getInstance() 
{
    // if the instance hasn't been initialized yet, call the constructor then return the instance
    if (instance == nullptr) instance = new Authenticator();
    return instance;
}

// returns the user that is currently logged in
Student* Authenticator::getUser()
{
    if (loggedIn == "no") perror("Error: No user is currently logged in.");
    return &loggedInUser;
}

// logs in user and opens main screen
int Authenticator::login(const string& username, const string& password)
{
    // ADD IN CALL TO DATABASE LATER!!!!!!!!

    // test username and password for saved user
    if (username == "tlarson3" && password == "abcd") {
        Student *loggedInUser = new Student(251207256, "Tyler Larson", 2026, "tlarson3@uwo.ca");
        loggedIn = "yes";
        return 0;
    }

    else if (username != "tlarson3") {
        // implement !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    }

    else {
        printf("incorrect password, please try again.\n");
        return 1;
    }
}

// logs out user and opens login screen
void Authenticator::logout()
{
    loggedIn = "no";
    // set logged in user to no one!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}

// destructor
Authenticator::~Authenticator()
{

}

Authenticator* Authenticator::instance = nullptr;