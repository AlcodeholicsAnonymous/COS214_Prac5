#include <iostream>
#include <string>
#include "HeadChef.h"
#include "CategoryChef.h"
#include "Chef.h"
#include "Waiter.h"

using namespace std;

int main() {
    cout << "\n";

    // // Create a dynamic array of CategoryChefs
    CategoryChef* chefs = new CategoryChef(1);
    
    // // Create a HeadChef
    HeadChef *headChef = new HeadChef(chefs);
    Customer *customer = new Customer();
    Order *order = new Order(customer);
    // headChef->startOrder(order);

    Waiter *waiter = new Waiter();
    waiter->setSuccessor(headChef);
    waiter->handleRequest(order);

    cout << "\n";
    return 0;
}
