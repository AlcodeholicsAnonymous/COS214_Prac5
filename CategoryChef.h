#pragma once

#include <iostream>
#include <string>
#include "Chef.h"

using namespace std;

class CategoryChef {
private:
    int category;
    Meal meal;
public:
    CategoryChef(int cat);
    void prepair(Meal meal);
    Meal getMeal();
};

CategoryChef::CategoryChef(int cat) {
    this->category = cat;
}

/// @brief Order has been delegated to this chef. The chef prepares the meal and sets the meal to the finished meal
/// @param meal 
void CategoryChef::prepair(Meal meal) {
    Meal _finishedMeal = Meal();
}

Meal CategoryChef::getMeal() {
    return this->meal;
}