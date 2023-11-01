#include "Order.h"
using namespace std;

Order::Order(Customer* c) {
    meals = nullptr;
    customer = c;
    state = "Ordered";
    next = nullptr;
}

Order::~Order() {
    
}

void Order::addMeal(Meal* meal) {
    if (meals == nullptr) {
        meals = meal;
        return;
    }
    Meal* mealPtr = meals;
    while (mealPtr->getNext() != nullptr) {
        mealPtr = mealPtr->getNext();
    }
    mealPtr->setNext(meal);
}

bool Order::removeMeal(string mealName) {
    if (meals == nullptr) {
        return false;
    }
    Meal* mealPtr = meals;
    while (mealPtr->getNext() != nullptr && mealPtr->getNext()->getName() != mealName) {
        mealPtr = mealPtr->getNext();
    }
    if (mealPtr->getNext() != nullptr && mealPtr->getNext()->getName() == mealName) {
        mealPtr->setNext(mealPtr->getNext()->getNext());
        mealPtr->getNext()->setNext(nullptr);
        return true;
    }
    return false;
}

// void Order::updateTab() {

// }

// void Order::payTab() {

// }

string Order::getState() {
    return state;
}

void Order::setState(string s) {
    state = s;
}

Meal* Order::getMeals() {
    return meals;
}

Meal* Order::getMeal() {
    return meals->getMeal();
}

Meal* Order::getNextMeal() {
    return meals->getNext()->getMeal();
}

Customer* Order::getCustomer() {
    return customer;
}

void Order::setCustomer(Customer* c) {
    customer = c;
}

// OrderBackup* Order::makeBackup() {
//     int price = 0;
//     //iterate through meals and calc price
//     return new OrderBackup(meals, state, customer, next, price);
// }

// void Order::restore(OrderBackup* ob) {
//     meals = ob->getMeals();
//     state = ob->getState();
//     customer = ob->getCustomer();
//     next = nullptr;
// }

