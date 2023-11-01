#pragma once
#include "HeadChef.h"
#include "Table.h"
class Waiter : public Employee {
private:
    Order* curOrder;
    HeadChef* headChef;
public:
    Waiter();
    ~Waiter();
    void takeOrder(Order* o);
    void deliverOrder(Order* o);
    void notify(Order* o);
    void notify(Table* t);
    void handleRequest(Order* o);
	int getID();
};

