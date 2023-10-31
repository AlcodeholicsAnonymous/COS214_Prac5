#pragma once

#include "Employee.h"
#include "Customer.h"
#include "Booking.h"
#include "Table.h"
#include "Waiter.h"

class MaitreD : public Employee
{
	private:
		Customer* queue;
		Booking* bookings;
		Table* tables;
		Waiter* waiters;
	public:
		MaitreD(int employeeNr);
		~MaitreD();
		Table* seat(Customer* c);
		void addBooking(Booking* b);
		bool removeBooking(Booking* b);
		bool combine(Table t1, Table t2);
		bool split(Table t);
		void assignWaiter(Waiter* w, Table* t);
};

MaitreD::MaitreD(int employeeNr) : Employee(employeeNr){
}

MaitreD::~MaitreD()
{
}
