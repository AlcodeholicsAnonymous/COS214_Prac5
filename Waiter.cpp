#include "Waiter.h"

Waiter::Waiter(Database* db) {
	database = db;
}

Waiter::~Waiter() {
}

int Waiter::getID() {
	return this->id;
}

void Waiter::takeOrder(Order* o) {
    successor->handleRequest(o);        //Error happening here seg fault.
}

void Waiter::deliverOrder(Order* o) {
    o->getCustomer()->eat(o);
}

void Waiter::notify(Order* o) {
    // cout << "Waiter " << this->getID() << " has been notified of order completion" << endl;
    deliverOrder(o);
}

void Waiter::notify(Table*) {

}

void Waiter::notify(bool method, Order* o) {
    if (method) {
        payTab(o);
    } else {
        addToTab(o);
    }
}

void Waiter::addToTab(Order* o) {
    database->addToTab(o, o->getCustomer()->getId());
}

void Waiter::payTab(Order* o) {
    database->addToTab(o, o->getCustomer()->getId());
    database->payTab(o->getCustomer()->getId());
}

void Waiter::createOrder(Customer *_c)
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int orderCount = (rand() % 10) + 1;
    cout << "Contents of order" << endl;

    Order* o = new Order(_c);
    // o->addMeal("Buffalo Chicken Pizza");

    int mealChoice;
    string* mealList = o->getDishList();
    for(int i = 0; i < orderCount; i++){
        mealChoice = (rand() % 205);
        o->addMeal(mealList[mealChoice]);
        // cout << mealList[mealChoice] << endl;
    }
    cout << endl;
    // o->printOrder();
    
    // this->takeOrder(o);
}
