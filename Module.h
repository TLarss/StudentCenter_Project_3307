#include <iostream>
#include "Course.h"
using namespace std;

#ifndef MODULE_H
#define MODULE_H

#pragma once

class Module
{
public:
    // constructor, initializes name
    Module(string n);

    // getter for name
    string getName();

    // setter for name
    void setName(string n);

    // method to add a class to the class list
    void addClass(Course c); // maybe add throws error (or mb have return as int, and the int can be a flag for an error)!!!!!!!

    // method to remove a class from the class list
    void removeClass(Cource c); // why doesnt course throw an error

    // destructor
    ~Module();

private:
    string name;
    Course[] classList;
    int numCredits;
    // entrance & grad requirements !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
};

#endif