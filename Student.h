#include "Person.h"
#include "Course.h"
#include <iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

#pragma once

class Student : public Person
{
public:
    // constructor 
    Student(int i, string n, int g);
    
    // constructor 2
    Student(int i, string n, int g, string e);

    // getter for grad year
    int getGradYear();

    // setter for grad year
    void setGradYear(int i);

    // getter for academic status
    string getAcademicStatus();

    // setter for academic status
    void setAcademicStatus(string a);

    // getter for modules
    Module[] getModules();

    // setter for modules
    void setModules(Module[] m);

    // getter for transcript
    Transcript getTranscript();

    // getter for classes
    Course[] getClasses();

    // setter for classes
    void addClass(Course c);

    //~Student(); // do i need this?????????????????????????

private:
    int gradYear;
    Module[] modules;
    string academicStatus;
    Transcript transcript;
    Course[] classes;
    // add more !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
};

#endif

// figure out how to handle modules and transcripts !!!!!!!!!!!!!!!!!!!!