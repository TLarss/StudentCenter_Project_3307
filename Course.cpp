#include "Course.h"
#include <iostream>
#include "Transcript.h"
using namespace std;

Course::Course(string f = "default faculty", int i = 0000)
{
    faculty = f;
    courseID = i;
}

void Course::setPrereqCount(int c)
{
    prereqCount = c;
    prereqs = new Course[c]; // move this around !!!!!!!!!!!!!!!!
}

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

Course[] Course::getPrereqs()
{
    return prereqs;
}

void Course::addPrereq(Course p)
{ // GO BACK AND MAKE IT CHECK IF THE COURSE IS ALREADY IN THE LIST !!!!!!!!!!!!!
    prereqs.append(p);
}

int Course::removePrereq(Course p)
{
    if (prereqs == NULL) return 1;

    else 
    {
        int flag = 0;
        Course prereqs_copy[prereqs.length() - 1];

        for (int i = 0; i++ ; i < prereqs.length())
        {
            if (prereqs[i] == p) // is there gonna be an issue with comparing course objects?
            {
                flag = 1;
                i = i + 1;
                prereqs_copy[i-1] = prereqs[i];        
            }
            
            else
            {
                prereqs_copy[i] = prereqs[i]
            } 
        }



        if (flag == 0) return 1;

        prereqs = prereqs_copy;
        return 0;
    }
}




Course::~Course()
{

}