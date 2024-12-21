#include "Authenticator.h"
using namespace std;

// ||| SINGLETON |||

// constructor
Authenticator::Authenticator() {}

// getter for instance, if the authenticator is not initialized, it creates the instance then returns it
Authenticator* Authenticator::getInstance() 
{
    // if the instance hasn't been initialized yet, call the constructor then return the instance
    if (!instance) instance = new Authenticator();
    return instance; 
}

// returns the user that is currently logged in
Student Authenticator::getUser()
{
    if (loggedIn == "no") perror("Error: No user is currently logged in.");
    return loggedInUser;
}

// logs in user and opens main screen
int Authenticator::login(const string& username, const string& password)
{
    // ADD IN CALL TO DATABASE LATER!!!!!!!!

    // test username and password for now
    if (username == "test_user" && password == "secure_password") {
        loggedInUser = username;
        loggedIn = "yes"
        return 0;
    }

    else {
        return 1;
    }
}

// logs out user and opens login screen
void Authenticator::logout()
{
    loggedInUser = "NO-USER";
}

// destructor
Authenticator::~Authenticator()
{

}