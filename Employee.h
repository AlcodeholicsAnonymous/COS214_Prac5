#pragma once

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Employee : public Person {
private:
    int employeeNr;
protected:
    Employee *successor;
public:
    Employee();
    ~Employee();
    Employee *getSuccessor();
    void setSuccessor(Employee* successor);
    virtual void handleRequest(Order* o);
};

