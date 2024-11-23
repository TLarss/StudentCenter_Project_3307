#include <iostream>
#include "Person.h"
#include "Course.h"
#include "Module.h"
#include "Transcript.h"

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

#pragma once

class Student : public Person
{
public:
    // constructor 1 (default)
    Student();

    // constructor 2
    Student(int i, string n, int g);
    
    // constructor 3
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
    Module* getModules();

    // adder for modules
    int addModule(Module m);

    // remover for module
    int removeModule(Module m);

    // getter for transcript
    Transcript getTranscript();

    // getter for classes
    Course* getClasses();

    // adder for classes
    int addClass(Course c);

    // remover for classes
    int removeClass(Course c);

    // destructor
    ~Student();

private:
    int gradYear;
    Module* modules;
    string academicStatus;
    Transcript transcript;
    Course* classes;
    int size;
    // add more later !!
};

#endif