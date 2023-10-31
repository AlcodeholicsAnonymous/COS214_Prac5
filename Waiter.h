#pragma once
#include "Employee.h"
#include "Table.h"
#include "Order.h"

class Waiter : public Employee {
private:
	Table* tables;
	Order* currOrder;
	Order dish;
public:
	Waiter(int employeeNr);
	~Waiter();
	void takeOrder(Order* o);
	void serveOrder(Order* o);
};

Waiter::Waiter(int employeeNr) : Employee(employeeNr)
{
}

Waiter::~Waiter()
{
}
