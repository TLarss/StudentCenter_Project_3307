#include "Person.h"
#include "Student.h"
#include <iostream>
using namespace std;

#ifndef AUTHENTICATOR_H
#define AUTHENTICATOR_H

#pragma once

class Authenticator
{
public:
    Authenticator();

    // returns the instance of Authenticator, if it's not initialized, it creates the instance then returns it
    static Authenticator* getInstance();

    // returns student object that is logged in
    Student* getUser(); // should this be a pointer ?????????????

    // logs in user and opens main screen
    int login(int i, string p);

    // logs out user and opens login screen
    int logout();

    // destructor
    ~Authenticator();

private:
    static Authenticator* instance; // is this right ????????????????
    Student* user;
};

#endif