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
    headChef->handleRequest(o);//take to head chef
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
    database->addToTab(o);
}

void Waiter::payTab(Order* o) {
    database->addToTab(o);
    database->payTab(o->getCustomer()->getId());
}
