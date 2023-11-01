#pragma once
using namespace std;

class Database {
	private: 
        Tab* tabs;
        //Database* db;
	public: 
        Database();
        void addTab(Tab* t);
        ~Database();
};