#pragma once

#include "Person.h"
#include "Booking.h"
#include "Table.h"
// #include "Tab.h"

#include <thread>  
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Customer:public Person{
private:
	int cusId;
	int size;
	Table *table;
	Booking *booking;
	// Tab tab;

public:
	Customer(Booking *booking, int size);
	void createOrder();
	void eat(Order* o);
	int getId();
	~Customer();
};