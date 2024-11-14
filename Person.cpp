#include <iostream>
#include "Person.h"
using namespace std;

// constructor 1, initializes name and email
Person::Person(int i, string n) : ID(i), name(n) {}

// constructor 2, initializes name and email, but also email
Person::Person(int i, string n, string e) : ID(i), name(n), email(e) {}

// setter for email
void Person::setEmail(string e)
{
    email = e;
}

// getter for ID
int Person::getID() const
{
    return ID;
}

// getter for name
string Person::getName() const
{
    return name;
}

// getter for email
string Person::getEmail() const
{
    return email;
}



// destructor          DO I NEED THIS????????????????????????????????????????????????????
/*Person::~Person()
{

}*/