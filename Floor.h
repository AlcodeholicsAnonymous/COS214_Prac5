#pragma once

#include "Employee.h"
#include "Table.h"

class Floor {
   private:
    Table* head;
    Employee observer;

   public:
    void add(Table* table);
    Table* remove(Table* table);
    bool combine(Table* table1, Table* table2);
    bool split(Table* table);
    void detach(Employee* employee, Table* table);
    void attach(Employee* employee, Table* table);
    // void notify();
    Floor();
    ~Floor();
};

