#include "CourseList.h"
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

// constructor (default), sets credits to 0
CourseList::CourseList() : credits(0) {}

// getter
CourseList::getCourseList()
{
    return list;
}

// adder for course list, returns 1 for error
int CourseList::addCourse(Course c)
{
    // check if the course is already in the list
    for (int i = 0; i < list.size(); i++) {
        if (list[i].getCourseName() == c.getCourseName()) {
            printf("course is already in list\n");
            return 1;
        }
    }

    // add course to list and incrament credits
    list.push_back(c);
    credits += c.getNumCredits();
    return 0;
}

// remover for course list, returns 1 for error
int CourseList::removeCourse(Course c) 
{
    // look for course in list
    int index = -1;
    for (int i = 0; i < list.size(); i++) {
        if (list[i].getCourseName() == c.getCourseName()) index = i;
    }

    // if the course is not in the list, return 1
    if (index == -1) {
        printf("Course not found in list\n");
        return 1
    }

    // remove the course from the list and decrement credits
    else {
        list.erase(list.begin()+i); // test this !!!!!!!!!!!!!!!!!
        float creds = c.getNumCredits();
        credits -= creds;
        return 0;
    }
}

// getter for credits
float CourseList::getCredits()
{
    return credits;
}

// destructor, does nothing
CourseList::~CourseList() {}