#include "Student.h"
#include "Person.h"
#include "Course.h"
#include "Module.h"
#include "RequirementDashboard.h"
#include "CourseNavigator.h"
#include "ProgressBar.h"
#include "CourseList.h"
#include "ModuleList.h"
#include "Transcript.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


// constructor 1, default constructor, takes no inputs & uses default values
Student::Student() 
{
    classes = new CourseList();
    modules = new ModuleList();
    ID = 0;
    name = "student name";

    requirementDashboard = new RequirementDashboard();
    courseNavigator = new CourseNavigator();
    progressBar = new ProgressBar();
}


// constructor 2, initializes ID, name, classes, modules, and grad year
Student::Student(int i, string n, int g) 
{
    classes = new CourseList();
    modules = new ModuleList();
    ID = i;
    name = n;
    gradYear = g;

    requirementDashboard = new RequirementDashboard();
    courseNavigator = new CourseNavigator();
    progressBar = new ProgressBar();
}

// constructor 3, initializes ID, name, grade year, classes, modules, and also email
Student::Student(int i, string n, int g, string e)
{
    classes = new CourseList();
    modules = new ModuleList();
    ID = i;
    name = n;
    gradYear = g;
    email = e;

    requirementDashboard = new RequirementDashboard();
    courseNavigator = new CourseNavigator();
    progressBar = new ProgressBar();
}

// getter for grad year
int Student::getGradYear()
{
    return gradYear;
}

// setter for grad year
void Student::setGradYear(int g)
{
    gradYear = g;
}

// getter for academic status
string Student::getAcademicStatus()
{
    return academicStatus;
}

// setter for academic status
void Student::setAcademicStatus(string a)
{
    academicStatus = a;
}

// getter for modules
const vector<Module> Student::getModules() const
{
    return modules.getModuleList();
}

// adder for modules, returns 0 for success & 1 for error
int Student::addModule(Module m)
{
    return modules.addModule(m);
    /*// check and return 1 if the module is already in the list
    for (int i = 0; i < size; i++) {
        if (modules[i].getName() == m.getName()) {
            return 1;
        }
    }

    // returns 1 if there are already 3 or more modules in the list
    if (size > 2) return 1;

    // create new classList & size variables 1 larger than the exsisting
    int newSize = size + 1;
    Module* newModules = new Module[newSize]; 

    // copy old courses to new array
    if (modules) { 
        memcpy(newModules, modules, size * sizeof(Course));
    }

    newModules[size] = m;

    // clear old courses data & replace it with the new courses array
    delete[] modules;
    modules = newModules;

    // replace old size attribute
    size = newSize;

    return 0;*/
}

// remover for modules
int Student::removeModule(Module m)
{
    return modules.removeModule(m);
    /*// look through modules array to find the index of the module to remove 
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (modules[i].getName() == m.getName()) index = i;
    }

    // if the module isnt in the array, return 1
    if (index == -1) return 1;

    // create new size and modules variables
    int newSize = size - 1;
    Module* newModules = new Module[newSize];

    // copy everything from the old array to the new array, except the module to remove
    for (int i = 0; i < newSize; i++) {
        if (i < index) {
            newModules[i] = modules[i];
        }

        else {
            newModules[i] = modules[i + 1];
        }
    }

    // clear old array & update attributes
    delete[] modules;
    modules = newModules;

    size = newSize;

    return 0;*/
}

// getter for transcript
Transcript Student::getTranscript()
{
    return transcript;
}

// getter for classes
const vector<Course> Student::getClasses() const
{
    return classes.getCourseList();
}

// adder for classes, won't accept duplicate courses, returns 0 for success or 1 for error
int Student::addClass(Course c) 
{
    return classes.addCourse(c);
    /*// check and return 1 if the course is already in the list
    for (int i = 0; i < size; i++) {
        if (classes[i].getCourseID() == c.getCourseID() && classes[i].getFaculty() == c.getFaculty()) {
            return 1;
        }
    }

    // create new classes & size variables 1 larger than the exsisting
    int newSize = size + 1;
    Course* newClasses = new Course[newSize]; 

    // copy old courses to new array
    if (newClasses) { 
        memcpy(newClasses, classes, size * sizeof(Course));
    }

    newClasses[size] = c;

    // clear old classes data & replace it with the new classes array
    delete[] classes;
    classes = newClasses;

    // replace old size attribute
    size = newSize;

    return 0;*/
}

// remover for classes
int Student::removeClass(Course c) 
{
    return classes.removeCourse(c);
    /*// look through classes array to find the index of the course to remove 
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (classes[i].getFaculty() == c.getFaculty() && classes[i].getCourseID() == c.getCourseID()) {
            index = i; 
        }
    }

    // if the course isnt in the array, return 1
    if (index == -1) return 1;

    // create a new size and completed for the smaller array
    int newSize = size - 1;
    Course* newClasses = new Course[newSize];

    // copy everything from the old array to the new array, except the course to remove
    for (int i = 0; i < newSize; i++) {
        if (i < index) {
            newClasses[i] = classes[i];
        }

        else {
            newClasses[i] = classes[i + 1];
        }
    }

    // clear old array & update attributes
    delete[] classes;
    classes = newClasses;

    size = newSize;

    return 0;*/
}

// getter for requirementDashboard
RequirementDashboard getRequirementDashboard()
{
    return requirementDashboard;
}

// getter for course navigator
CourseNavigator getCourseNavigator()
{
    return courseNavigator;
}

// getter for progressBar
ProgressBar getProgressBar()
{
    return progressBar
}

// destructor
Student::~Student()
{

}