#include "Test.h"
#include <iostream>

// Constructor implementation
Test::Test(const std::string& msg) : message(msg) {}

// Getter implementation
std::string Test::getMessage() const {
    return message;
}

// Setter implementation
void Test::setMessage(const std::string& msg) {
    message = msg;
}

// Print method implementation
void Test::printMessage() const {
    std::cout << "Message: " << message << std::endl;
}