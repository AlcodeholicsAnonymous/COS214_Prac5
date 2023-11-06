#pragma once
using namespace std;
#include "Tab.h"

class Database {
	private: 
        Tab* db;
        void addTab(Tab* t);
	public: 
        Database();
        void addToTab(Order* o);
        bool payTab(int custId);
        ~Database();
};