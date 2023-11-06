#include "Floor.h"

void Floor::add(Table* table) {
    if (this->head == nullptr) {
        this->head = table;
    } else {
        Table* curr = head;
        while (curr->getNext() != nullptr) {
            curr = curr->getNext();
        }
        curr->setNext(table);
        table->setPrevious(curr);
    }
}

Table* Floor::remove(Table* table) {
    if (this->head == nullptr) {
        return nullptr;
    } else {
        if (this->head == table) {
            this->head = this->head->getNext();
            this->head->setPrevious(nullptr);
            return table;
        } else {
            Table* curr = this->head;
            while (curr->getNext() != nullptr) {
                if (curr->getNext() == table) {
                    curr->setNext(curr->getNext()->getNext());
                    curr->getNext()->setPrevious(curr);
                    table->setNext(nullptr);
                    table->setPrevious(nullptr)  ;
                    return table;
                }
                curr = curr->getNext();
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
        Table* newTable1 = new Table(table->getCombinedTable()->getSize(), true, table->getNumber());
        Table* newTable2 = new Table(table->getSize() - table->getCombinedTable()->getSize(), true, table->getCombinedTable()->getNumber());
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
    table->setWaiter(employee);
}

void Floor::detach(Employee* employee, Table* table) {
    table->setWaiter(nullptr);
}

Floor::Floor() {

}

Floor::~Floor() {

}