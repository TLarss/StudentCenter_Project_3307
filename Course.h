#include <iostream>
using namespace std;

#ifndef COURSE_H
#define COURSE_H

#pragma once


class Course
{
public:
    // constructor 1 (default)
    Course();

    // constructor 2, only initializes faculty and course ID
    Course(string f, int i);

    void setPrereqCount(int c);

    int getPrereqCount();

    // getter for faculty
    string getFaculty();

    // setter for faculty
    void setFaculty(string f);

    // getter for course ID
    int getCourseID();

    // setter for course ID
    void setCourseID(int i);

    // getter for title
    string getTitle();

    // setter for title
    void setTitle(string t);

    // getter for type
    char getType();

    // setter for type
    void setType(char t);

    // getter for number of credits
    float getNumCredits();

    // setter for num credits
    void setNumCredits(float n);

    // getter for prereqs
    Course* getPrereqs();

    // setter for prereqs
    int addPrereq(Course p);


    // to remove a prereq, returns 0 for success, and returns 1 for class not found
    int removePrereq(Course p);

    // get the course name  (returns the facult + course number)
    string getCourseName();

    // destructor
    ~Course();

private:
    string faculty;
    int courseID;
    string title;
    char type;
    float numCredits;
    Course* prereqs;
    int prereqCount;
    int size;
    // later - add prereq count attribute !!
};

#endif