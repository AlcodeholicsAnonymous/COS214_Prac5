#pragma once

#include "Employee.h"

class Table;

class Floor {
   private:
    Table* head;
    Employee MaitreD;

   public:
    void add(Table* table);
    Table* remove(Table* table);
    bool combine(Table* table1, Table* table2);
    bool split(Table* table);
    void detach(Table* table);
    void attach(Employee* employee, Table* table);
    Floor();
    ~Floor();
};

