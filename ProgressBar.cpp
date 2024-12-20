#include "ProgressBar.h"
#include "Observer.h"
#include "Student.h"
#include "Transcript.h"
#include <iostream>
using namespace std;

ProgressBar::ProgressBar()
{

}

void ProgressBar::printProgressBar(Student u)
{
    Transcript t = u.getTranscript();
    const vector<Course> completed = t.getCompleted();
    const vector<int> grades = t.getGrades();

    float credits = 0;

    for (int i = 0; i < t.getSize(); i++) {

        Course ci = completed[i];

        if (grades[i] > 50) {
            credits += ci.getNumCredits();
        }
    }

    // Send float credits to front end to be displayed
}

void ProgressBar::update(Student u)
{
    printProgressBar(u);
}

ProgressBar::~ProgressBar()
{

}