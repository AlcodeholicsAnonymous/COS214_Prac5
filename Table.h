#pragma once

// #include "Waiter.h"
#include "Floor.h"

class Waiter;

class Table {
   private:
    bool available;
    int number;
    int size;
    Waiter* waiter;

    Table *next;
    Table *previous;
    Table* combinedTable;

   public:
    
    bool combined;
    
    void setCombinedTable(Table* combinedTable);
    Table* getCombinedTable();
    void setWaiter(Waiter* waiter);
    Waiter* getWaiter();
    void setNext(Table* next);
    Table* getNext();
    void setPrevious(Table* previous);
    Table* getPrevious();

    void setAvailable(bool available);
	bool getAvailable();
	int getSize();
    int getNumber();
    Table(int size, bool available, int number);
    Table(int size, bool available, int number, bool combined, Table* combinedTable);
    ~Table();
};

