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

    HeadChef(CategoryChef* chefs);
    void startOrder(Order* o);
    void delegateOrder(Order* o);
    void plateOrder(Order* _finishedOrder);
    void handleRequest(Order* o);
};


