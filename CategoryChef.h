#pragma once

#include <iostream>
#include <string>
#include "Chef.h"

using namespace std;

class CategoryChef: public Chef {
private:
    int category;
    Meal meal;
public:
    CategoryChef();
    CategoryChef(int cat);
    void prepair(Meal meal);
    Meal getMeal();
};