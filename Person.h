#pragma once
#include "Order.h"
class Waiter;

static int maxId = {0};
class Person{
private:
    Waiter *mediator;
protected:
    int id;
    Person();
    ~Person();
    Waiter* getMediator();
    void setMediator(Waiter* w);
public:
    
};

extern int maxId;