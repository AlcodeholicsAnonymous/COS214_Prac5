#pragma once

#include <iostream>
#include <string>
#include "CategoryChef.h"

using namespace std;

class HeadChef: public Chef {
private:
    CategoryChef* chefs;
public:
    HeadChef(CategoryChef* chefs);
    void startOrder(Order o);
    void delegateOrder();
    void plateOrder(Order _finishedOrder);
};

HeadChef::HeadChef(CategoryChef* chefs) {
    this->chefs = chefs;
}

/// @brief Start the order by setting the order and changing the state of the order to in progress
/// @param o 
void HeadChef::startOrder(Order o) {
    this->setOrder(o);
    // Change the state of the order when Order is implememnted
}

/// @brief  Handle the delegation of the order to the appropriate CategoryChef based on what the order is
void HeadChef::delegateOrder() {
    // Order _finishedOrder = Order();
    // while(this->curOrder.getNextMeal() != nullptr) {
    //     int category = curOrder.getMeal()->getCategory();
    //     chefs[category].prepair(curOrder.getMeal());
    //     _finishedOrder.addMeal(chefs[category].getMeal());
    // }
    // this->plateOrder(_finishedOrder);
}

/// @brief  Set the order to the finished order and call the waiter to come and fetch it.
/// @param _finishedOrder 
void HeadChef::plateOrder(Order _finishedOrder) {
    this->setOrder(_finishedOrder);
    // Call the waiter to come and fetch the order
    
}

