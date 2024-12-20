#include "CourseNavigator.h"
#include "Transcript.h"
#include "Course.h"
#include <iostream>
using namespace std;

CourseNavigator::CourseNavigator()
{

}

void CourseNavigator::printCompletedCourses(Student u)
{
    Transcript transcript = u.getTranscript();
    vector<Course> completedCorses = transcript.getCompleted();

    // display array values to app screen !!!
}

void CourseNavigator::printCurrentCourses(Student u)
{
    vector<Course> currentCourses = u.getClasses();

    // display array values to app screen !!!
}


// I'm somewhat using Facade Pattern here right?

void CourseNavigator::printUpcomingCourses(Student u)
{
    vector<Module> modules = u.getModules();
    Transcript transcript = u.getTranscript();
    const vector<Course> completedCourses = transcript.getCompleted();
    vector<Course> currentCourses = u.getClasses();

    // only for the 1st module for now, implement others later !!!!!
    Module m1 = modules[0];
    const vector<Course> m1Courses = m1.getClassList();

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