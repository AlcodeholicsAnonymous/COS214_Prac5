#include "Customer.h"


Customer::Customer(Booking *booking){
	this->booking = booking;
	// booking->getBooked() ? this->table = booking->getTable() : this->table;
	cusId = id++;
	string buddy = "";
	if(booking->getBooked()){
		buddy = "have a booking for " + to_string(booking->getSize()) + " People.\nThey are seated at table " + to_string(booking->getTable()) + ".\n";
	}
	else{
		buddy = "do not have a booking. Waiter will look for a table for " + to_string(booking->getSize()) + " People.\n";
	}
	cout << "Customer " << cusId << " has entered the restaurant! They " << buddy << endl;
}

void Customer::createOrder(){

}

void Customer::eat(){

	srand(static_cast<unsigned int>(time(nullptr)));
    int time = 5 + rand() % 16;

	cout << "Customer " << cusId << " will eat for " << time << endl;
	this_thread::sleep_for(chrono::seconds(time));

    int yes = rand() % 2;

	this->pay(yes);
}

void Customer::pay(bool method){
	if(method){
		//call on their table's waiter's order's tab to pay it all off
	}

	else{
		//call on their table's waiter's order's tab to increase it
	}
}

int Customer::getId() {
	return cusId;
}

Customer::~Customer(){
}