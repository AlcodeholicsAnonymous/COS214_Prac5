#pragma once

#include "Waiter.h"

static int maxId = 0;
class Person{
private:
	Waiter* mediator;
protected:
	int id;
	Person();
	~Person();
	Waiter* getMediator();
	void setMediator(Waiter* w);
};

Person::Person(){
	id = ++maxId;
}

Person::~Person(){
	delete mediator;
}

Waiter* Person::getMediator() {
	return mediator;
}

void Person::setMediator(Waiter* w) {
	mediator = w;
}