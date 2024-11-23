#include <iostream>
#include "Course.h"
//#include "Student.h"
using namespace std;

#ifndef TRANSCRIPT_H
#define TRANSCRIPT_H

#pragma once

// TO DO: -add functionality so a course can be taken multiple times. -maybe add an attribute linking back to the student?

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
    Course* completed;
    int* grades;
    int size;
    // later - maybe add a year/date attribute to track when a course was taken?
};

#endif