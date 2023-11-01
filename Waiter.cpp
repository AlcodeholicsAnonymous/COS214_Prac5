#include "Waiter.h"

Waiter::Waiter() : Employee() {
	
}

Waiter::~Waiter() {
}

void Waiter::takeOrder(Order* o) {
    curOrder = o;
}

void Waiter::deliverOrder(Order* o) {

}

void Waiter::notify(Order* o) {

}

void Waiter::notify(Table* t) {

}

int Waiter::getID() {
	return this->id;
}
void Waiter::handleRequest(Order* o) {
    this->takeOrder(o);
    cout << "Waiter " << this->id << " took order " << endl;
    successor->handleRequest(o);
}