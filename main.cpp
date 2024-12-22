#include "Student.h"
#include "Module.h"
#include "Course.h"
#include "Authenticator.h"
#include<iostream>
#include <string>
#include <vector>
using namespace std;


int main() 
{
    Authenticator *auth = Authenticator::getInstance();
    //Authenticator::getInstance()->login("tlarson3", "abcd");
    auth->login("tlarson3", "abcd");
    Student *savedUser = auth->getUser();
    //Student *savedUser = Authenticator::getInstance()->getUser();


    Module* cs = new Module("CS specialization and software engineering minor");
    //cs.setType("specialization and minor");

    // create courses:
    Course* cs1026 = new Course("compsci", 1026, 'A', 'C', 0.5);
    Course* cs1027 = new Course("compsci", 1027, 'A', 'C', 0.5);
    Course* calc1000 = new Course("calc", 1000, 'A', 'C', 0.5);
    Course* math1600 = new Course("math", 1600, 'A', 'C', 0.5);
    Course* bus1220 = new Course("business", 1220, 'E', 'A', 1.0);
    /*Course* cs1032 = new Course("compsci", 1027, 'A', 'C', 0.5);
    Course* cs1027 = new Course("compsci", 1027, 'A', 'C', 0.5);
    Course* cs1027 = new Course("compsci", 1027, 'A', 'C', 0.5);
    Course* cs1027 = new Course("compsci", 1027, 'A', 'C', 0.5);
    Course* cs1027 = new Course("compsci", 1027, 'A', 'C', 0.5);*/
    




    


    return 0;
}