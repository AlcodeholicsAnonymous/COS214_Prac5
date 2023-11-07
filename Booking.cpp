// #include "Booking.h"

// using namespace std;

// Booking::Booking(Table *table){
//     this->table = table;
//     isBooked = table->getAvailable();
// }
// Booking::Booking(Table *table, Customer *customer){
//     this->table = table;
//     isBooked = table->getAvailable();
//     if(isBooked){
//         table->setAvailable(false);
//         customer->setTable(table);
//     }
// }
// Table *Booking::getTable(){
//     return this->table;
// }

// bool Booking::getBooked(){
//     return isBooked;
// }

// Booking::~Booking(){
// }
