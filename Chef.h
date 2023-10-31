#pragma once

#include <iostream>
#include <string>
#include "Order.h"
#include "Employee.h"

using namespace std;

class Chef {
protected:
    Order curOrder;
public:
    Chef();
    Order getOrder();
    void setOrder(Order order);
};

Chef::Chef() {
    curOrder = Order();
}

Order Chef::getOrder() {
    return this->curOrder;
}

void Chef::setOrder(Order o) {
    this->curOrder = o;
}



