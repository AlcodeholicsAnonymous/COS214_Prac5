#pragma once
using namespace std;
#include "Order.h"
// #include "Database.h"

class Tab {
	private: 
        int customerId;
        int total;
        Order* orders;
        //Database* db;
	public: 
        Tab(int cId);
        void addToTab(Order* o);
        void calcTotal();
        ~Tab();
};