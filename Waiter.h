#pragma once
#include "HeadChef.h"
#include "Order.h"
#include "Table.h"
// #include "Database.h"

class Waiter : public Employee {
private:
    HeadChef* headChef;
    // Database* database;
public:
    Waiter();
    // Waiter(Database* db);
    ~Waiter();
    void takeOrder(Order* o);
    void deliverOrder(Order* o);
    void notify(Order* o);
    void notify(Table* t);
    // void notify(bool method, Order* o);
    // void addToTab(Order* o);
    // void payTab(Order* o);

	int getID();
};

