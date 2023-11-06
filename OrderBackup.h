#pragma once
using namespace std;
#include "Customer.h"
#include "Dish.h"

class OrderBackup {
	private:
        Meal* meals;		//head
        string state;
        Customer* customer;
        OrderBackup* next;
        int price;
	public:
        OrderBackup(Meal* meals, string state, Customer* customer, int price);
        ~OrderBackup();

        Meal* getMeals();
        string getState();
        Customer* getCustomer();

        OrderBackup* getNext();
        void setNext(OrderBackup* ob);
};