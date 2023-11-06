#pragma once

#include <iostream>
#include <string>
#include "Chef.h"
#include "CategoryChef.h"
#include "Order.h"

using namespace std;

class HeadChef: public Chef {
private:
    CategoryChef* chefs;
public:
    string type = "HeadChef";
    HeadChef(CategoryChef*);
    void startOrder(Order*);
    void delegateOrder(Order*);
    void plateOrder(Order*);
    void handleRequest(Order*);
    void notify(Order *o);
};


