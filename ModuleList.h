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

#ifndef MODULELIST_H
#define MODULELIST_H

#pragma once

class ModuleList
{
public:
    // constructor (default)
    ModuleList();

    // getter
    vector<Moduule> getModuleList();

    // adder
    int addModule(Module m);

    // remover
    int removeModule(Module m);

    // destructor
    ~ModuleList();

private:
    veector<Module> list;
};

#endif