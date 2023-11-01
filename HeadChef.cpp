#include "HeadChef.h"


HeadChef::HeadChef(CategoryChef* chefs) {
    cout << "HeadChef created" << endl;
    this->chefs = chefs;
}

/// @brief Start the order by setting the order and changing the state of the order to in progress
/// @param o 
void HeadChef::startOrder(Order* o) {
    this->setOrder(o);
    cout << "Order Status changed from \"Not Started\" to \"In Progress\"" << endl;
    // Change the state of the order when Order is implememnted
    delegateOrder(o);
}

/// @brief  Handle the delegation of the order to the appropriate CategoryChef based on what the order is
void HeadChef::delegateOrder(Order* o) {
    cout << "Delegating order to CategoryChefs" << endl;
    Order* _finishedOrder = new Order(o->getCustomer());
    // while(this->curOrder.getNextMeal() != nullptr) {
    //     int category = curOrder.getMeal()->getCategory();
    //     call handle request on the category chef
    //     _finishedOrder.addMeal(chefs[category].getMeal());
    // }
    cout << "All category chefs finished their meals" << endl;
    this->plateOrder(_finishedOrder);
}

/// @brief  Set the order to the finished order and call the waiter to come and fetch it.
/// @param _finishedOrder 
void HeadChef::plateOrder(Order* _finishedOrder) {
    cout << "Order being plated" << endl;
    this->setOrder(_finishedOrder);
    cout << "Order Status changed from \"In Progress\" to \"Completed\"" << endl;
    // Call the waiter to come and fetch the order
}
void HeadChef::handleRequest(Order* o) {
    cout << "HeadChef handling request" << endl;
    this->startOrder(o);
}