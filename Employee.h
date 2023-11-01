#pragma once

<<<<<<< Updated upstream
class Employee {
	private:
	int _employeeNr;
	public:
	Employee(int employeeNr) : _employeeNr(employeeNr) { };
	~Employee();
	const int &employeeNr = _employeeNr;
=======
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
    // virtual void handleRequest(Order*);
>>>>>>> Stashed changes
};

