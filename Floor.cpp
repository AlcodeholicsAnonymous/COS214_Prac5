#include "Floor.h"
#include "Table.h"
void Floor::addTable(Table* table) {
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
    if (table->getAvailable()) {
        this->availableTables++;
    }
}   
Table* Floor::remove(Table* table) {
    if (this->head == nullptr) {
        return nullptr;
    } else {
        if (this->head == table) {
            this->head = this->head->getNext();
            this->head->setPrevious(nullptr);
            table->setNext(nullptr);
            table->setPrevious(nullptr);
            return table;
        } else {
            Table* curr = this->head;
            while (curr->getNext() != nullptr) {
                if (curr->getNext() == table) {
                    curr->setNext(curr->getNext()->getNext());
                    curr->getNext()->setPrevious(curr);
                    table->setNext(nullptr);
                    table->setPrevious(nullptr);
                    return table;
                }
                curr = curr->getNext();
            }
        }
    }
    return nullptr;
}


bool Floor::combine(Table* table1, Table* table2) {
    if (table1->getAvailable() && table2->getAvailable()) {
        Table* newTable = new Table(table1->getSize() + table2->getSize() - 2, true, table1->getNumber(), true, table2);
        if (this->remove(table1) == nullptr) {
            return false;
        } else if (table1->getAvailable()) {
        }

        if (this->remove(table2) == nullptr) {
            return false;
        } else if (table2->getAvailable()) {
        }
        this->addTable(newTable);
        return true;
    }
    return false;
}

bool Floor::split(Table* table) {
    if (table->getAvailable() && table->combined) {
        Table* newTable1 = new Table(table->getCombinedTable()->getSize(), true, table->getNumber());
        Table* newTable2 = new Table(table->getSize() - table->getCombinedTable()->getSize(), true, table->getCombinedTable()->getNumber());

        if (this->remove(table) == nullptr) {
            return false;
        }
        this->addTable(newTable1);
        this->addTable(newTable2);

        return true;
    }
    return false;
}

void Floor::attach(Waiter* waiter, Table* table) {
    table->setWaiter(waiter);
}

void Floor::detach(Table* table) {
    table->setWaiter(nullptr);
}

Table* Floor::getFirstAvailableTable() {
    Table* curr = this->head;
    while (curr != nullptr) {
        if (curr->getAvailable()) {
            return curr;
        }
        curr = curr->getNext();
    }
    return nullptr;

}

void Floor::updateAvailability() {
    Table* curr = this->head;
    int counter = 0;
    while (curr != nullptr) {
        if (curr->getAvailable()) {
            counter++;
        }
        curr = curr->getNext();
    }
    this->availableTables = counter;
}

Table* Floor::combineTablesNumPeople(int num) {
    Table* curr = this->head;
    int numTables = 0;
    Table** tables = new Table*[num];
    int maxSize = 0;
    while (curr != nullptr) {
        if (curr->getAvailable() && maxSize < num) {
            tables[numTables] = curr;
            numTables++;
            maxSize += curr->getSize()-2;
        }
        curr = curr->getNext();
    }
    if (maxSize < num || numTables == 0) {
        return nullptr;
    }
    Table* newTable = tables[0];
    for (int i = 1; i < numTables; i++)
    {
        newTable = this->combine(newTable, tables[i]);
    }
    return newTable;
}

Table* Floor::getAvailableForNumPeople(int num) {
    Table* curr = this->head;
    while (curr != nullptr) {
        if (curr->getAvailable() && curr->getSize() >= num) {
            return curr;
        }
        curr = curr->getNext();
    }
    return nullptr;
}

Floor::~Floor() {

}