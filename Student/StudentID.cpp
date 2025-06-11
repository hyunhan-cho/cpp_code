#include <iostream>
#include <string>
#include "StudentID.h"

StudentID::StudentID(std::string name, int idNumber) {
    this->name = name;

    if(idNumber > 0){
        this-> idNUmber = idNumber;
    } else {
        std::cerr << "Error: ID number must be positive." << std::endl;
        idNUmber = 0; // Default to 0 if invalid
    }
}

StudentID::StudentID(std::string name, int idNumver) :
    name{name}, idNUmber{idNumver} {
    if (idNumver <= 0) {
        std::cerr << "Error: ID number must be positive." << std::endl;
        idNUmber = 0; // Default to 0 if invalid
        }
    }

std::string StudentID::getName()  {
    return name;
}   

StudentID::~StudentID() {
    std::cout << "Destructor called for " << name << std::endl;
};

