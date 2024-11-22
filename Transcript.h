#include <iostream>
#include "Course.h"
//#include "Student.h"
using namespace std;

#ifndef TRANSCRIPT_H
#define TRANSCRIPT_H

#pragma once

// TO DO: - add functionality so a course can be taken multiple times

class Transcript
{
public:
    Transcript();

    // getter for completed courses
    const Course* getCompleted() const;

    // adder for completed, returns 0 for success & 1 for error
    void addCompleted(Course c, int g);

    // remove completed, returns 0 for success & 1 for error
    int removeCompleted(Course c);

    // change completed grade, returns 0 for success & 1 for error (IF THERE ARE MULTIPLE OF THE SAME COURSE, ONLY 1 WILL BE ERASED)
    int changeGrade(Course c, int g);

    ~Transcript();

private:
    //const Course* completed = nullptr;
    Course* completed;
    //int* grades = nullptr;
    int* grades;
    // maybe add a year or date attribute for when course was taken????
    int size;
    
};

#endif