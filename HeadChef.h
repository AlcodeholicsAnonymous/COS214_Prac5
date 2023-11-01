#pragma once

#include <iostream>
#include <string>
#include "Chef.h"
#include "CategoryChef.h"

using namespace std;

class HeadChef: public Chef {
private:
    CategoryChef* chefs;
public:

    HeadChef(CategoryChef* chefs);
    void startOrder(Order* o);
    void delegateOrder();
    void plateOrder(Order* _finishedOrder);
};


