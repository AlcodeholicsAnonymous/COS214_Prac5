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
    successor->handleRequest(o);//Error happening here seg fault.
}

void Waiter::deliverOrder(Order* o) {
    o->getCustomer()->eat(o);
}

void Waiter::notify(Order* o) {
    deliverOrder(o);
}

void Waiter::notify(Table* t) {

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

void Waiter::createOrder()
{
    Order* o = new Order();
    
    this->takeOrder(o);
}
