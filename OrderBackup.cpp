#include "OrderBackup.h"

OrderBackup::OrderBackup(Meal* m, string s, Customer* c, Order* n):
    meals(m),
    state(s),
    customer(c),
    next(n)
    {}

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

Order* OrderBackup::getNext() {
    return next;
}

void OrderBackup::setNext(OrderBackup* ob) {
    next = ob;
}