#include "Order.h"
using namespace std;


Order::Order() {

}

Order::Order(Customer* c) {
    meals = nullptr;
    customer = c;
    state = "Ordered";
    //next = nullptr;
}

Order::~Order() {
    
}

int getCat(string meal){

    for(int i = 0; i<206;i++){
        if(meal == foodBank[i].name){
            return foodBank[i].category;
        }
    }
    return 1;

}

void Order::addMeal(string mealName) {
    
    Meal* meal;
    if(getCat(mealName) == 1){
        meal = new Ingredients(mealName);
    }else{
        meal = new Dish(mealName);
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
OrderBackup* Order::makeBackup() {
    int price = 0;
    //iterate through meals and calc price
    Meal* mealPtr = meals;
    while (mealPtr != nullptr) {
        price += mealPtr->getCost();
        mealPtr = mealPtr->getNext();
    }
    return new OrderBackup(meals, state, customer, price);
}

void Order::restore(OrderBackup* ob) {
    meals = ob->getMeals();
    state = ob->getState();
    customer = ob->getCustomer();
    //next = nullptr;
}

string* Order::getDishList() {

    string meals[206];
    
    for(int i = 0;i < 206;i++){
        meals[i] = foodBank[i].name;
    }

    return meals;

}