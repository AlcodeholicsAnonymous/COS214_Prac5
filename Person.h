#pragma once
// #include "Waiter.h"
class Order;
class Waiter;

class Person{
private:
    Waiter *mediator;
protected:
    static int maxId;
    int id;
    Person();
    ~Person();
    Waiter* getMediator();
    void setMediator(Waiter* w);
public:
    
};
