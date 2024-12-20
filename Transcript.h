#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
#include "Student.h"
#include "CourseList.h"
#include "ModuleList.h"
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
    const vector<Course> getCompleted() const;

    // adder for completed, returns 0 for success & 1 for error
    int addCompleted(Course c, int g);

    // remove completed, returns 0 for success & 1 for error
    int removeCompleted(Course c);

    // change completed grade, returns 0 for success & 1 for error (IF THERE ARE MULTIPLE OF THE SAME COURSE, ONLY 1 WILL BE ERASED)
    int changeGrade(Course c, int g);

    // getter for grades
    const vector<int> getGrades() const;

    // getter for size
    int getSize();

    ~Transcript();

private:
    CourseList completed;
    vector<int> grades;
    int size;
    // later - maybe add a year/date attribute to track when a course was taken?

    void notifyObservers();
};

#endif