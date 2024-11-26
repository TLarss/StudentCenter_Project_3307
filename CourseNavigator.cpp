#include "CourseNavigator.h"
#include "Observer.h"
#include "Authenticator.h"
#include "Transcript.h"
#include <iostream>
using namespace std;

CourseNavigator::CourseNavigator()
{

}

void CourseNavigator::printCompletedCourses(Student u)
{
    Transcript transcript = u.getTranscript();
    const Course* completedCorses = transcript.getCompleted();

    // display array values to app screen !!!
}

void CourseNavigator::printCurrentCourses(Student u)
{
    Course* currentCourses = u.getClasses();

    // display array values to app screen !!!
}


// I'm somewhat using Facade Pattern here right?

void CourseNavigator::printUpcomingCourses(Student u)
{
    Module* modules = u.getModules();
    Transcript transcript = u.getTranscript();
    const Course* completedCourses = transcript.getCompleted();
    Course* currentCourses = u.getClasses();

    // only for the 1st module for now, implement others later !!!!!
    Module m1 = modules[0];
    const Course* m1Courses = m1.getClassList();

    // display array values to app screen !!!


    /*for (int i = 0; i < m1.getSize(); i++) {
        Course c = m1Courses[i];

        for (int j = 0; j < completedCourses.Length(); j ++) {
            if 
        }
    } */
}

void CourseNavigator::update(Student u)
{
    printCompletedCourses(u);
    printCurrentCourses(u);
    printUpcomingCourses(u);
}

CourseNavigator::~CourseNavigator()
{

}