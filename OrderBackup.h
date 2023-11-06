#pragma once
using namespace std;
#include "Customer.h"
#include "Meal.h"

class OrderBackup {
	private:
        Meal* meals;		//head
        string state;
        Customer* customer;
        Order* next;
	public:
        OrderBackup(Meal* meals, string state, Customer* customer, Order* next, int price);
        ~OrderBackup();

        Meal* getMeals();
        string getState();
        Customer* getCustomer();

        OrderBackup* getNext();
        void setNext(OrderBackup* ob);
};