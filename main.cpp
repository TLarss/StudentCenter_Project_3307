//#include "Student.cpp" // probs
#include "Module.h"
#include "Course.cpp"
//#include "Authenticator.cpp" // probs
#include "Transcript.cpp" // probs
//#include "Facade.cpp" // probs
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student;


int main() 
{
    printf("Hello world!\n");
    Course *testCourse = new Course();
    //Authenticator* auth = Authenticator::getInstance(); // !!!!!!!!!!!
    //Facade *facade = new Facade(auth);
    //Facade *facade = new Facade(Authenticator::getInstance());

    /*auth->loginAttempt("tlarson3", "abcd");
    Student *savedUser = auth->getUser();


    Module *cs = new Module("CS specialization and software engineering minor");
    cs->setType("specialization and minor");

    // create courses:
    vector<Course*> modCourses;
    Course *cs1026 = new Course("compsci", 1026, 'A', 'C', 0.5);
    Course *cs1027 = new Course("compsci", 1027, 'A', 'C', 0.5);
    Course *calc1000 = new Course("calculus", 1000, 'A', 'C', 0.5);
    Course *math1600 = new Course("mathematics", 1600, 'A', 'C', 0.5);
    Course *bus1220 = new Course("business", 1220, 'E', 'A', 1.0);
    Course *cs1032 = new Course("compsci", 1032, 'A', 'C', 0.5);
    Course *cs1033 = new Course("compsci", 1033, 'A', 'C', 0.5);
    Course *econ1021 = new Course("economics", 1021, 'A', 'A', 0.5);
    Course *econ1022 = new Course("economics", 1022, 'A', 'A', 0.5);
    Course *math1229 = new Course("mathematics", 1229, 'A', 'C', 0.5);

    cs->addClass(cs1026);
    cs->addClass(cs1027);
    cs->addClass(calc1000);
    cs->addClass(math1600);
    cs->addClass(bus1220);
    cs->addClass(cs1032);
    cs->addClass(cs1033);
    cs->addClass(econ1021);
    cs->addClass(econ1022);
    cs->addClass(math1229);

    savedUser->addModule(*cs);

    // ........
    auth->logout();
    facade->loginScreen();*/

    return 0;
}