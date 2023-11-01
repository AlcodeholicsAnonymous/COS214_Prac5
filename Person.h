#pragma once

#include "Waiter.h"

static int maxId = 0;
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

