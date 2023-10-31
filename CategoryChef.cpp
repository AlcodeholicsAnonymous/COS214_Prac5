#include "CategoryChef.h"

CategoryChef::CategoryChef() {
    // cout << "Default CategoryChef created" << endl;
    this->category = 0;
}

CategoryChef::CategoryChef(int cat) {
    this->category = cat;
    cout << "CategoryChef created with category number: " << category << endl;
}

/// @brief Order has been delegated to this chef. The chef prepares the meal and sets the meal to the finished meal
/// @param meal 
void CategoryChef::prepair(Meal meal) {
    // Meal _finishedMeal = Meal();
}

Meal CategoryChef::getMeal() {
    return this->meal;
}