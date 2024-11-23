#include "Authenticator.h"
#include "Person.h"
#include "Student.h"
#include <iostream>
using namespace std;

// constructor
Authenticator::Authenticator()
{
    // what to do here?????????????
}

// getter for instance, if the authenticator is not initialized, it creates the instance then returns it
Authenticator* Authenticator::getInstance() 
{
    if (instance) return instance;

    Authenticator *i = new Authenticator();
    instance = i;

    return instance;   
}

// returns the user that is currently logged in
Student* Authenticator::getUser()
{
    return user; // what to do if user is null? is there a way to catch this error???????
}

// logs in user and opens main screen
int Authenticator::login(int i, string p)
{
    // ???????????????????
}

// logs out user and opens login screen
int Authenticator::logout()
{
    // ?????????????????????
}

// destructor
Authenticator::~Authenticator()
{

}