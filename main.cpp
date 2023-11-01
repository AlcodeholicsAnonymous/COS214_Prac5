#include <iostream>
#include <string>
#include "Booking.h"
#include "Customer.h"
#include "Employee.h"
#include "Chef.h"
#include "HeadChef.h"

using namespace std;

int main() {

    // 2: meat 
// 3: fish
// 4: pizza
// 5: fry
// 6: burger
// 7: pastry
// 8: pasta
// 9: salads
// 10: drinks
    cout << "\n";

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

    HeadChef *headChef = new HeadChef(meatChef);

    Customer *customer = new Customer(new Booking(true, 1, 2));
    Customer *customer2 = new Customer(new Booking(5));

    cout << "\n";
    return 0;
}
