#include "Course.h"
#include "Transcript.h"
#include <cstring>
#include <iostream>
using namespace std;

// constructor 1 (default): takes no input, gives default values to Faculty, courseID, size, and initializes prereqs
Course::Course() : faculty("default"), courseID(0), size(0) {}

// constructor 2: 
Course::Course(string f, int i)
{
    faculty = f;
    courseID = i;
}

/*void Course::setPrereqCount(int c)
{
    prereqCount = c;
    prereqs = new Course[c]; // move this around !!!!!!!!!!!!!!!!
}*/

string Course::getFaculty()
{
    return faculty;
}

void Course::setFaculty(string f)
{
    faculty = f;
}

int Course::getCourseID()
{
    return courseID;
}

void Course::setCourseID(int i)
{
    courseID = i;
}

string Course::getTitle()
{
    return title;
}

void Course::setTitle(string t)
{
    title = t;
}

char Course::getType()
{
    return type;
}

void Course::setType(char t)
{
    type = t;
}

float Course::getNumCredits()
{
    return numCredits;
}

void Course::setNumCredits(float n)
{
    numCredits = n;
}

const vector<Course> Course::getPrereqs() const
{
    return prereqs.getCourseList();
}

// adds course to prereqs list, returns 0 for success & 1 for error
int Course::addPrereq(Course p)
{ 
    return prereqs.addCourse(p);

    /*// check if the course is already in the list
    int flag = 0;
    for (int i = 0; i < size; i++) {
        if (prereqs[i].getCourseID() == p.getCourseID() && prereqs[i].getFaculty() == p.getFaculty()) {
            flag = 1;
        }
    }
    // return 1 if it is already in the list
    if (flag == 1) return 1;

    // create new size and prereqs attributes
    int newSize = size + 1;
    Course* newPrereqs = new Course[newSize];

    // copy old prereq list to a new one
    if (prereqs) {
        memcpy(newPrereqs, prereqs, size * sizeof(Course));
    }

    // add new prereq course to the new list
    newPrereqs[size] = p;

    // clear memory of the old list, then update the prereqs and size attributes
    delete[] prereqs;
    prereqs = newPrereqs;
    size = newSize;

    return 0;*/
}

int Course::removePrereq(Course p)
{
    return prereqs.removeCourse(p);
    
    /*// look through array to find index of the course
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (prereqs[i].getFaculty() == p.getFaculty() && prereqs[i].getCourseID() == p.getCourseID()) {
            index = i;
        }
    }

    // return 1 if the course isnt in the array
    if (index == -1) return 1;

    // create new size & prereqs
    int newSize = size - 1;
    Course* newPrereqs = new Course[newSize];

    // copy all courses except the course to remove
    for (int i = 0; i < newSize; i++) {
        if (i < index) {
            newPrereqs[i] = prereqs[i];
        }

        else {
            newPrereqs[i] = prereqs[i + 1];
        }
    }

    // clear old & save new data
    delete[] prereqs;
    prereqs = newPrereqs;

    size = newSize;

    return 0;*/
}

// returns a string of the faculty + the course ID
string Course::getCourseName() 
{
    string name = faculty + " " + to_string(courseID);
    return name;
}

// setter for breadth
void Course::setBreadth(char b)
{
    breadth = b;
}

// getter for breadth
char Course::getBreadth()
{
    return breadth;
}

// destructor
Course::~Course()
{

}