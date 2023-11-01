#pragma once
#include "Person.h"
#include "Booking.h"

#include <thread>  
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Customer:public Person{
private:
	int cusId;
	Booking *booking;
	// Tab tab;

public:
	Customer(Booking *booking);
	void createOrder();
	void eat();
	void pay(bool method);
	int getId();
	~Customer();
};
