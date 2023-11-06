using namespace std;
#include "Database.h"



Database::Database() {
    db = new Tab(13);
}

Database::~Database() {

}

void Database::addTab(Tab* t) {
    //If db empty -> add tab to head
    if (db == nullptr) {
        db = t;
        return;
    }

    //Db not empty -> go to last tab
	Tab* tabPtr = db;
	while (tabPtr->getNext() != nullptr) {
        tabPtr = tabPtr->getNext();
    }
    tabPtr->setNext(t);     //add tab at end of db
}

void Database::addToTab(Order* o, int custId) {
    //Create memento of order
    cout << "Creating backup\n";
    OrderBackup* ob = o->makeBackup();
    cout << "Order backed up\n";
    //if db empty -> create new tab, add order to it and add tab to db
    if (db == nullptr) {
        Tab* newTab = new Tab(custId);
        newTab->addToTab(ob);
        this->addTab(newTab);
        return;
    }

    //db not empty -> search for customer's tab
    Tab* tabPtr = db;
    while (tabPtr->getNext() != nullptr && tabPtr->getCustId() != custId) {
        tabPtr = tabPtr->getNext();
    }

    //Has found customer tab
    if (tabPtr->getCustId() == custId) {
        tabPtr->addToTab(ob);
        return;
    }

    //Has not found custormer's tab -> create new tab, add order to it and add tab to db
    Tab* newTab = new Tab(custId);
    newTab->addToTab(ob);
    this->addTab(newTab);
    return;
}

bool Database::payTab(int custId) {
    //DB empty -> could not pay tab (This will technically never happen as we add the order to the tab even if they pay immediately)
    if (db == nullptr) {
        return false;
    }

    //DB not empty -> search for customer's tab
    Tab* tabPtr = db;
    while (tabPtr->getNext() != nullptr && tabPtr->getCustId() != custId) {
        tabPtr = tabPtr->getNext();
    }

    //Tab found
    if (tabPtr->getCustId() == custId) {
        delete tabPtr;
        //maybe output total or something
        return true;
    }
    return false;           //Tab was not found (again technically this can't happen)
}

void Database::randomPrintStatement()
{
    cout << "Hello There!";
}