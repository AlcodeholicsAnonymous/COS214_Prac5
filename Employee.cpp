#include "Employee.h"

Employee::Employee() : Person() {
    successor = nullptr;
    employeeNr = id;
}

Employee::~Employee() {
    // delete successor;
}

Employee* Employee::getSuccessor() {
    return successor;
}

void Employee::setSuccessor(Employee *successor) {
    this->successor = successor;
}

void Employee::handleRequest(Order *o)
{
}

void Employee::notify(Table *)
{
}
