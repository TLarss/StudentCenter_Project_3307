#include "Module.h"
#include "Course.h"
#include <cstring>
#include <iostream>
using namespace std;

Module::Module(string n = "Default") : size(0), classList(nullptr)
{
    name = n;
}

// getter for name
string Module::getName() 
{
    return name;
}

// setter for name
void Module::setName(string n) 
{
    name = n;
}

// getter for class list
const Course* Module::getClassList() 
{
    return classList;
}

// add class to course list
void Module::addClass(Course c) // NEED TO ADD -> make it check if the course is aready in the module
{
    // create new classList & size variables 1 larger than the exsisting
    int newSize = size + 1;
    Course* classList2 = new Course[newSize]; // why am i getting this error ????????????????????

    // copy old courses to new array
    if (classList) { 
        memcpy(classList2, classList, size * sizeof(Course));
    }

    classList2[size] = c;

    // clear old courses data & replace it with the new courses array
    delete[] classList;
    classList = classList2;

    // replace old size attribute
    size = newSize;
}

// remove class from course list, return 0 for success or 1 for error
int Module::removeClass(Course c)
{
    // look through completed array to find the index of the course to remove 
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (classList[i].getFaculty() == c.getFaculty() && classList[i].getCourseID() == c.getCourseID()) index = i; // why error ???????????????????????????????????????????
    }

    // if the course isnt in the array, return 1
    if (index == -1) return 1;

    // create a new size and completed for the smaller array
    int newSize = size - 1;
    Course* newClassList = new Course[newSize];

    // copy everything from the old array to the new array, except the course to remove
    for (int i = 0; i < newSize; i++) {
        if (i < index) {
            newClassList[i] = classList[i];
        }

        else {
            newClassList[i] = classList[i + 1];
        }
    }

    // clear old array & update attributes
    delete[] classList;
    classList = newClassList;

    size = newSize;

    return 0;
}

// getter for num credits
float Module::getNumcredits() 
{
    return numCredits;
}

// setter for num credits
void Module::setNumCredits(float n)
{
    numCredits = n;
}

// add credits
void Module::addCredits(float c) 
{
    numCredits = numCredits + c;
}

// getter for type
string Module::getType() 
{
    return type;
}

// setter for type
void Module::setType(string t) 
{
    type = t;
}

// destructor 
Module::~Module()
{

}