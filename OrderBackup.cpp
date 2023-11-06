#include "OrderBackup.h"

OrderBackup::OrderBackup(Meal* meals, string state, Customer* customer, int price) 
{
    this->meals = meals;
    this->state = state;
    this->customer = customer;
    this->price = price;
    this->next = nullptr;
}

OrderBackup::~OrderBackup() {

}

Meal* OrderBackup::getMeals() {
    return meals;
}

string OrderBackup::getState() {
    return state;
}

Customer* OrderBackup::getCustomer() {
    return customer;
}

OrderBackup* OrderBackup::getNext() {
    cout << "OrderBackup's getNext() called" << endl;
    return next;
}

void OrderBackup::setNext(OrderBackup* ob) {
    next = ob;
}