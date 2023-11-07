#pragma once
using namespace std;
#include "OrderBackup.h"

class Tab {
	private: 
		int customerId;
		int total;
		OrderBackup* orders;
		Tab* next;
	public: 
		Tab(int cId);
		void addToTab(OrderBackup* ob);
		int getTotal();
		void setTotal(int t);
		Tab* getNext();
		void setNext(Tab* t);
		int getCustId();
		~Tab();
};