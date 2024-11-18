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

    // getter for class list
    Course[] getClassList(); // what to do here ?????????????????????????????????????????????????????

    // method to add a class to the class list
    void addClass(Course c); // maybe add throws error (or mb have return as int, and the int can be a flag for an error)!!!!!!!

    // method to remove a class from the class list
    void removeClass(Course c); // why doesnt course throw an error

    // getter for num credits
    float getNumcredits(); // maybe implement num credits as a variable that is set by itself by adding up the credits 

    // setter for num credits
    void setNumCredits(float n);

    // add credits
    void addCredits(float c);

    // getter for type
    string getType();

    // setter for type
    void setType(string t);


    // destructor
    ~Module();

private:
    string name;
    Course classList[0]; // this means its empty right???
    int classListLen;
    float numCredits;
    // type is major, minor, specialization, etc...
    string type;
    // entrance & grad requirements !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
};

#endif