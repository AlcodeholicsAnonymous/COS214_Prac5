#include "Booking.h"

using namespace std;

Booking::Booking(){
}

Table *Booking::getTable(){
    return this->table;
}

bool Booking::getBooked(){
    return isBooked;
}

Booking::~Booking(){
}
