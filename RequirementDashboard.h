#include "Observer.h"
#include "Student.h"
#include <iostream>
using namespace std;

#ifndef REQUIREMENTDASHBOARD_H
#define REQUIREMENTDASHBOARD_H

#pragma once


// implement later for deliverable 3 !!!


class RequirementDashboard : public Observer
{
public:
    RequirementDashboard();

    void printRequirements(Student u);

    void evaluateRequirements(Student u);

    void findRequirements(Student u);

    void findPrerequisites(Student u);

    void update(Student u);

    ~RequirementDashboard();

private:

};

#endif