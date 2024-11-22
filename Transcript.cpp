#include <iostream>
#include "Transcript.h"
#include "Student.h"
#include "Course.h"
#include <cstring>
using namespace std;

Transcript::Transcript() : size(0), completed(nullptr), grades(nullptr) {}

// getter for completed list
const Course* Transcript::getCompleted() const
{
    return completed;
}

// adder for completed
void Transcript::addCompleted(Course c, int g)
{
    // create a new size & completed 1 bigger than the origional
    int newSize = size + 1;
    Course* newCompleted = new Course[newSize];

    // copy old completed array to new array
    if (completed) { // will this work ???????????????????????????????????????????????
        memcpy(newCompleted, completed, size * sizeof(Course));
    }

    newCompleted[size] = c;

    // create new grades array
    int* newGrades = new int[newSize];

    // copy old grades to new array
    if (grades) { // will this work ??????????????????????????????????
        memcpy(newGrades, grades, size * sizeof(int));
    }

    newGrades[size] = g;

    // clear old array data & replace it with the new arrays
    delete[] completed;
    completed = newCompleted;

    delete[] grades;
    grades = newGrades;

    size = newSize;
}

// remove completed, returns 0 for success & 1 for error (IF THERE ARE MULTIPLE OF THE SAME COURSE, ONLY ONE WILL BE ERASED)
int Transcript::removeCompleted(Course c)
{
    // look through completed array to find the index of the course to remove 
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (completed[i].getFaculty() == c.getFaculty() && completed[i].getCourseID() == c.getCourseID()) {
            index = i;
            break;
        }
    }

    // if the course isnt in the array, return 1
    if (index == -1) return 1;

    // create a new size and completed for the smaller array
    int newSize = size - 1;
    Course* newCompleted = new Course[newSize];

    // copy everything from the old array to the new array, except the course to remove
    for (int i = 0; i < newSize; i++) {
        if (i < index) {
            newCompleted[i] = completed[i];
        }

        else {
            newCompleted[i] = completed[i + 1];
        }
    }

    // create new grades array for smaller size
    int* newGrades = new int[newSize];

    // copy everything from the old array to the new array, except the grade to remove
    for (int i = 0; i < newSize; i++) {
        if (i < index) {
            newGrades[i] = grades[i];
        }

        else {
            newGrades[i] = grades[i + 1];
        }
    }

    // clear old arrays & update attributes
    delete[] completed;
    completed = newCompleted;

    delete[] grades;
    grades = newGrades;

    size = newSize;

    return 0;
}

// change grade for a completed course
int Transcript::changeGrade(Course c, int g) 
{
    // look through array to find the index of the course 
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (completed[i].getFaculty() == c.getFaculty() && completed[i].getCourseID() == c.getCourseID()) {
            index = i;
            break;
        }
    }

    // if the course isnt in the array, return 1
    if (index == -1) return 1;

    // change the corresponding grade
    grades[index] = g;

    return 0;
}


Transcript::~Transcript()
{
    
}