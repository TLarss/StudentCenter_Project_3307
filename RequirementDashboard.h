#include "Observer.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef REQUIREMENTDASHBOARD_H
#define REQUIREMENTDASHBOARD_H

#pragma once


// implement later for deliverable 3 !!!


class RequirementDashboard : public Observer
{
public:
    RequirementDashboard();

    RequirementDashboard(string doc);

    void printRequirements(Student u);

    void setRequirements(string doc);

    void update(Student u);

    ~RequirementDashboard();

private:
    float minCredits;
    int minAverage;
    float minA;
    float minB;
    float minC;
    float minEssay;
    float minSenior;
    float minFaculty;
    float maxFaculty;
};

#endif