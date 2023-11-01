#include <iostream>
#include <string>
#include "Booking.h"
#include "Customer.h"
#include "Employee.h"
#include "Chef.h"
#include "HeadChef.h"
#include "CategoryChef.h"
#include "Meal.h"

using namespace std;

CategoryChef* populateChefs();

int main() {
    cout << "\n";


    HeadChef *headChef = new HeadChef(populateChefs());

    // Pizza order
    Meal *pizza = new Meal();
    // Order *order = new Order();

    cout << "\n";
    return 0;
}

CategoryChef* populateChefs() {
    CategoryChef *meatChef = new CategoryChef(2);
    CategoryChef *fishChef = new CategoryChef(3);
    meatChef->setNextChef(fishChef);
    CategoryChef *pizzaChef = new CategoryChef(4);
    fishChef->setNextChef(pizzaChef);
    CategoryChef *fryChef = new CategoryChef(5);
    pizzaChef->setNextChef(fryChef);
    CategoryChef *burgerChef = new CategoryChef(6);
    fryChef->setNextChef(burgerChef);
    CategoryChef *pastryChef = new CategoryChef(7);
    burgerChef->setNextChef(pastryChef);
    CategoryChef *pastaChef = new CategoryChef(8);
    pastryChef->setNextChef(pastaChef);
    CategoryChef *saladsChef = new CategoryChef(9);
    pastaChef->setNextChef(saladsChef);
    CategoryChef *drinksChef = new CategoryChef(10);
    saladsChef->setNextChef(drinksChef);
    return meatChef;
}
