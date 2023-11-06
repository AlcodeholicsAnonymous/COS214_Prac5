#include "Booking.h"

using namespace std;

Booking::Booking(Table *table){
    this->table = table;
    isBooked = table->getAvailable();
}

Table *Booking::getTable(){
    return this->table;
}

bool Booking::getBooked(){
    return isBooked;
}

Booking::~Booking(){
}
