#pragma once

#include <iostream>
#include <string>
#include "Order.h"
#include "Employee.h"

using namespace std;

class Chef: public Employee {
protected:
    Order *curOrder;
public:
    Chef();
    Order* getOrder();
    void setOrder(Order* order);
};





