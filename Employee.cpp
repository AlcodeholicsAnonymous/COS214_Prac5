#include "Employee.h"

Employee::Employee() : Person() {
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
