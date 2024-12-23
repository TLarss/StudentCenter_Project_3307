#ifndef TEST_H
#define TEST_H

#include <string>

class Test {
private:
    std::string message;

public:
    // Constructor
    Test(const std::string& msg);

    // Getter for the message
    std::string getMessage() const;

    // Setter for the message
    void setMessage(const std::string& msg);

    // A method to print the message
    void printMessage() const;
};

#endif // TEST_H