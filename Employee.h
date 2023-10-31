#pragma once

#include <iostream>
#include <string>
// #include "Person.h"

using namespace std;

class Employee {
private:
	int employeeNr;
protected:
    Employee *successor;
public:
	Employee(int _idNumber, int _employeeNr);
	~Employee();
    Employee* getSuccessor();
    void setSuccessor(Employee *successor);
};

Employee::Employee(int _idNumber, int _employeeNr) {
    // Uncomment once ethan is done
    // this.idNumber = _idNumber;
    employeeNr = _employeeNr;
}

Employee::~Employee() {
    delete successor;
}

Employee* Employee::getSuccessor() {
    return successor;
}

void Employee::setSuccessor(Employee *successor) {
    this->successor = successor;
}

