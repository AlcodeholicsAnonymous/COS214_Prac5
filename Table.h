#pragma once

#include "Employee.h"
#include "Floor.h"

class Table {
   private:
    bool available;
    int number;
    int size;

   public:
    Employee* waiter;
    Table *next;
    Table *previous;
    bool combined;
    Table* combinedTable;

    void setAvailable(bool available);
	bool getAvailable();
	int getSize();
    int getNumber();
    Table(int size, bool available, int number);
    Table(int size, bool available, int number, bool combined, Table* combinedTable);
    ~Table();
};

