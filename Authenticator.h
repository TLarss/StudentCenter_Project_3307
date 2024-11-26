#include "Person.h"
#include "Student.h"
#include <iostream>
using namespace std;

#ifndef AUTHENTICATOR_H
#define AUTHENTICATOR_H

#pragma once


// TO DO: -add REGISTER option!!


class Authenticator
{
public:
    // returns the instance of Authenticator, if it's not initialized, it creates the instance then returns it
    static Authenticator* getInstance();

    // returns student object that is logged in
    string getUser();

    // logs in user and opens main screen
    int login(const string& username, const string& password);

    // logs out user and opens login screen
    void logout();


private:
    static Authenticator* instance; 
    string loggedInUser = "NO-USER";
    // Student* user;

    // constructor
    Authenticator();

    // destructor
    ~Authenticator();
};

#endif