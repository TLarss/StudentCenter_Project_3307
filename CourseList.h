#include "Course.h"
#include "Authenticator.h"
#include "Module.h"
#include "Person.h"
#include "Student.h"
#include "Transcript.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


#ifndef COURSELIST_H
#define COURSELIST_H

#pragma once

class CourseList
{
public:
    // Constructor (default)
    CourseList();

    // getter
    vector<Course> getCourseList();

    // adder
    int addCourse(Course c);

    // remover
    int removeCourse(Course c);

    // getter for credits
    float getCredits();

    // destructor
    ~CourseList();

private:
    vector<Course>;
    float credits;

};

#endif