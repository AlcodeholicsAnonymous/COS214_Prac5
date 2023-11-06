#include "Order.h"
using namespace std;


Order::Order() {

}

Order::Order(Customer* c) {
    head = nullptr;
    customer = c;
    state = "Ordered";
    //next = nullptr;
}

Order::~Order() {
    
}

int Order::getCat(string meal){

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
    meal->setNext(head);
    head = meal;
}

bool Order::removeMeal(string mealName) {
    if (head == nullptr) {
        return false;
    }
    Meal* mealPtr = head;
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
    return head;
}

Meal* Order::getMeal() {
    return head->getMeal();
}

Meal* Order::getNextMeal() {
    return head->getNext()->getMeal();
}

Customer* Order::getCustomer() {
    return customer;
}

void Order::setCustomer(Customer* c) {
    customer = c;
}
OrderBackup* Order::makeBackup() {
    int price = 0;
    //iterate through head and calc price
    Meal* mealPtr = head;
    while (mealPtr != nullptr) {
        price += mealPtr->getCost();
        mealPtr = mealPtr->getNext();
    }
    return new OrderBackup(head, state, customer, price);
}

void Order::restore(OrderBackup* ob) {
    head = ob->getMeals();
    state = ob->getState();
    customer = ob->getCustomer();
    //next = nullptr;
}

string* Order::getDishList() {

    string* head = new string[206];
    
    for(int i = 0;i < 206;i++){
        head[i] = foodBank[i].name;
    }

    return head;

}
void Order::printOrder(){
    Meal* mealPtr = head;
    while (mealPtr != nullptr) {
        cout << mealPtr->getName() << endl;
        mealPtr = mealPtr->getNext();
    }
}