using namespace std;
#include "Customer.h"

Customer::Customer(Booking *booking, int size){
	this->size = size;
	this->booking = booking;
	booking->getBooked() ? this->table = booking->getTable() : this->table;
	cusId = id++;
	string buddy = booking->getBooked() ? " have a booking. " : " do not have a booking. ";
	cout << "Customer " << cusId << " has entered the restaurant! They " << buddy << endl;
}

void Customer::createOrder(){
    srand(static_cast<unsigned int>(time(nullptr)));

    int orderCount = (rand() % 10) + 1;

    Order* o = new Order(this);

    int mealChoice;
    string* mealList = o->getDishList();
    for(int i = 0; i < orderCount; i++){
        mealChoice = (rand() % 205);
        o->addMeal(mealList[mealChoice]);
    }
    o->printOrder();
    table->getWaiter()->takeOrder(o);
}

void Customer::eat(Order* o){
    cout << "Customer " << cusId << " is eating their meal" << endl;

	srand(static_cast<unsigned int>(time(nullptr)));
    // int time = 5 + rand() % 16;
    // generate a random int between 3 and 6
    int time = 3 + rand() % 4;

	cout << "Customer " << cusId << " will eat for " << time << " seconds" << endl;
	// this_thread::sleep_for(chrono::seconds(time));               // Uncomment!!!!!

    bool payingNow = rand() % 2;

    cout << "Customer is done eating" << endl;
    // cout << "Random bool: " << payingNow << endl;
    payingNow = false;
    table->getWaiter()->notify(payingNow, o);

}

int Customer::getId() {
	return cusId;
}

Customer::~Customer(){
}
