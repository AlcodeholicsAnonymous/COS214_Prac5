#pragma once
using namespace std;
#include "Tab.h"
#include "Order.h"
class Database {
private: 
        Tab* db;
        void addTab(Tab* t);
public: 
        void randomPrintStatement();
        Database();
        void addToTab(Order* o, int custId);
        bool payTab(int custId);
        ~Database();
};