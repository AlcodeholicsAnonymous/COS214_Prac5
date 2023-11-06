#include "HeadChef.h"

HeadChef::HeadChef(CategoryChef* chefs) {
    this->chefs = chefs;
    cout << "HeadChef created with id: " << this->id << ", They are in charge of chefs:" << endl;
    cout << "{" << endl;
    while(chefs != nullptr) {
        cout << "\tCategory chef with category: " << chefs->getCategory() << "\t(" << chefs->categories[chefs->getCategory() - 2] << ")" << endl;
        chefs = chefs->getNextChef();
    }

    cout << "}" << endl;
}

/// @brief Start the order by setting the order and changing the state of the order to in progress
/// @param o 
void HeadChef::startOrder(Order* o) {
    this->setOrder(o);
    cout << "\nOrder Status changed from: " << o->getState() << ", to: ";
    o->setState("In Progress");
    cout << o->getState() << endl;
    // Change the state of the order when Order is implememnted
    delegateOrder(o);
}

/// @brief  Handle the delegation of the order to the appropriate CategoryChef based on what the order is
void HeadChef::delegateOrder(Order* o) {
    cout << "\nOrder Status changed from: " << o->getState() << ", to: ";
    o->setState("Delegated");
    cout << o->getState() << endl;
    Order* _finishedOrder = new Order(o->getCustomer());
    
    CategoryChef *tempChefs = this->chefs;
    Meal* tempMeal = o->getMeal();
    while (tempMeal != nullptr) {
        cout << "Category Chefs Creating: " << o->getMeal()->getName() << endl;
        int category = o->getMeal()->getCategory();
        // cout << "Category: " << category << " (" <<  << endl;
        // while (tempChefs->getCategory() != category) {
        //     tempChefs = chefs->getNextChef();
        // }
        // tempChefs->handleRequest(_finishedOrder);
        // tempChefs = this->chefs;
        // o->removeMeal(o->getMeal()->getName());
        tempMeal = tempMeal->getNext();
    }
    
    this->plateOrder(_finishedOrder);
}

/// @brief  Set the order to the finished order and call the waiter to come and fetch it.
/// @param _finishedOrder 
void HeadChef::plateOrder(Order* _finishedOrder) {
    cout << "\nOrder Status changed from: " << _finishedOrder->getState() << ", to: ";
    _finishedOrder->setState("Plated");
    cout << _finishedOrder->getState() << endl;
    this->setOrder(_finishedOrder);

    cout << "\nOrder Status changed from: " << _finishedOrder->getState() << ", to: ";
    _finishedOrder->setState("Completed");
    cout << _finishedOrder->getState() << endl;
    // Call the waiter to come and fetch the order
}
void HeadChef::handleRequest(Order* o) {
    cout << "HeadChef handling request" << endl;
    this->startOrder(o);
}