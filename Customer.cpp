using namespace std;
#include "Customer.h"

Customer::Customer(Booking *booking, int size){
	this->size = size;
	this->booking = booking;
	booking->getBooked() ? this->table = booking->getTable() : this->table;
	cusId = id++;
	string buddy = booking->getBooked() ? "have a booking. " : "do not have a booking. ";
	cout << "Customer " << cusId << "has entered the restaurant! They " << buddy << endl;
}

void Customer::createOrder(){
	// srand(static_cast<unsigned int>(time(nullptr)));

	// int orderCount = (rand() % 10) + 1;
	
	// Order* o = new Order();
	// o->setCustomer(this);
	// Order* o = new Order(this);
	//table.waiter.takeOrder(o)
	
	table->getWaiter()->createOrder();
}

void Customer::eat(Order* o){
	srand(static_cast<unsigned int>(time(nullptr)));
    int time = 5 + rand() % 16;

	cout << "Customer " << cusId << "will eat for " << time << endl;
	this_thread::sleep_for(chrono::seconds(time));

    int yes = rand() % 2;

    // table->waiter->notify(yes, o);
}

int Customer::getId() {
	return cusId;
}

Customer::~Customer(){
}
