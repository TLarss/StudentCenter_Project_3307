#include <iostream>
#include "Course.h"
using namespace std;

#ifndef TRANSCRIPT_H
#define TRANSCRIPT_H

#pragma once

class Transcript
{
public:
    Transcript();

    // getter for completed courses
    array<Course, 0> getCompleted(); // help with the arrays!!!!!!!!!!!!!!

    // adder for completed
    void addCompleted(Course c, int g);

    // remove completed
    void removeCompleted(Course c);

    // change completed grade
    void changeGrade(Course c, int g);

    ~Transcript();

private:
    Course completed[0];
    int grades[0];
};

#endif