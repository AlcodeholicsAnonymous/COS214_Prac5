#include "Person.h"

Person::Person(){
    id = ++maxId;
}

Person::~Person(){
    // delete mediator;
}

Waiter* Person::getMediator() {
    return mediator;
}

void Person::setMediator(Waiter* w) {
    mediator = w;
}