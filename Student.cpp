#include "Student.h"
#include "Person.h"
#include "Course.h"
#include "Module"
#include <iostream>
using namespace std;


// constructor 1, default constructor, takes no inputs & uses default values
Student::Student() : ID(000000000), name("student name") {}


// constructor 2, initializes ID, name and grad year
Student::Student(int i, string n, int g)
{
    ID = i;
    name = n;
    gradYear = g;
}

// constructor 3, initializes ID, name, grade year, and also email
Student::Student(int i, string n, int g, string e)
{
    ID = i;
    name = n;
    gradYear = g;
    email = e;
}

// getter for grad year
int Student::getGradYear()
{
    return gradYear;
}

// setter for grad year
void Student::setGradYear(int g)
{
    gradYear = g;
}

// getter for academic status
string Student::getAcademicStatus()
{
    return academicStatus;
}

// setter for academic status
void Student::setAcademicStatus(string a)
{
    academicStatus = a;
}

// getter for modules
Module[] Student::getModules()
{
    return modules;
}

// setter for modules
void Student::setModules(Modules[] m)
{
    modules = m;
}

// getter for transcript
Transcript Student::getTranscript()
{
    return transcript;
}

// getter for classes
Course[] Student::getClasses()
{
    return classes;
}



// destructor // do i need this????????????????????????????????
/*Student::~Student()
{

}*/