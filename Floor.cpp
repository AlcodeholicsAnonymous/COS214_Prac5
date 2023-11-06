#include "Floor.h"

void Floor::add(Table* table) {
    if (this->head == nullptr) {
        this->head = table;
    } else {
        Table* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = table;
        table->previous = curr;
    }
}

Table* Floor::remove(Table* table) {
    if (this->head == nullptr) {
        return nullptr;
    } else {
        if (this->head == table) {
            this->head = this->head->next;
            this->head->previous = nullptr;
            return table;
        } else {
            Table* curr = this->head;
            while (curr->next != nullptr) {
                if (curr->next == table) {
                    curr->next = curr->next->next;
                    curr->next->previous = curr;
                    table->next = nullptr;
                    table->previous = nullptr;
                    return table;
                }
                curr = curr->next;
            }
        }
    }
}

bool Floor::combine(Table* table1, Table* table2) {
    if (table1->getAvailable() && table2->getAvailable()) {
        Table* newTable = new Table(table1->getSize() + table2->getSize(), true, table1->getNumber(), true, table2);
        this->add(newTable);
        if (this->remove(table1) == nullptr) {
            return false;
        }
        if (this->remove(table2) == nullptr) {
            return false;
        }
        return true;
    }
    return false;
}

bool Floor::split(Table* table) {
    if (table->getAvailable() && table->combined) {
        Table* newTable1 = new Table(table->combinedTable->getSize(), true, table->getNumber());
        Table* newTable2 = new Table(table->getSize() - table->combinedTable->getSize(), true, table->combinedTable->getNumber());
        this->add(newTable1);
        this->add(newTable2);
        if (this->remove(table) == nullptr) {
            return false;
        }
        return true;
    }
    return false;
}

void Floor::attach(Employee* employee, Table* table) {
    table->waiter = employee;
}

void Floor::detach(Employee* employee, Table* table) {
    table->waiter = nullptr;
}

// void Floor::notify() {

// }

Floor::Floor() {

}

Floor::~Floor() {

}