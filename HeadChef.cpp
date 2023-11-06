#include "HeadChef.h"

HeadChef::HeadChef(CategoryChef* _chefs) {
    this->chefs = _chefs;
    // cout << "HeadChef created with id: " << this->id << ", They are in charge of chefs:" << endl;
    // cout << "{" << endl;
    // while(chefs != nullptr) {
    //     cout << "\tCategory chef with category: " << chefs->getCategory() << "\t(" << chefs->categories[chefs->getCategory() - 2] << ")" << endl;
    //     chefs = chefs->getNextChef();
    // }

    // cout << "}" << endl;
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

        if (category == 1) {
            _finishedOrder->addMeal(tempMeal->getName());
            tempMeal = tempMeal->getNext();
            continue;
        }

        cout << "Category: " << category << " (" << tempChefs->categories[category - 2] << ")" << endl;
        for (int i = 0; i < 9; i++)
        {
            
            if (tempChefs->getCategory() == category) {
                tempChefs->handleRequest(tempMeal);
                _finishedOrder->addMeal(tempChefs->getMeal()->getName());
                break;
            }
            tempChefs = tempChefs->getNextChef();
        }
        
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
    _finishedOrder->setState("Completed");
    cout << _finishedOrder->getState() << endl;
    this->setOrder(_finishedOrder);

    // Call the waiter to come and fetch the order
    // this->notify(_finishedOrder);
    // this->notify();
    this->successor->notify(_finishedOrder);
}
void HeadChef::handleRequest(Order* o) {
    // cout << "HeadChef handling request" << endl;
    this->startOrder(o);
}

void HeadChef::notify(Order *)
{
}


