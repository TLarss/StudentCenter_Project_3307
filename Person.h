#include <iostream>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

#pragma once // what is this ????????????????????????????????????????

class Person
{
public:
    // Constructor 1: Sets ID and name
    Person(int i, string n);

    // Constructor 2: Sets ID, name, and email
    Person(int i, string n, string e);

    // Setter for email
    void setEmail(string e);

    // Getter for ID
    int getID() const;

    // Getter for name
    string getName() const;

    // Getter for email
    string getEmail() const;

    // destructor    DO I NEED THIS ??????????????????????????
    //~Person(); 

private:
    int ID;
    string name;
    string email;

};

#endif