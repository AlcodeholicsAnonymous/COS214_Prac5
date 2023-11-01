#include "Table.h"
#include "Waiter.h"
#include "Floor.h"

void Table::setAvailable(bool available) {
    this->available = available;
    // this->waiter->notify(this);
}

bool Table::getAvailable() {
    return available;
}

int Table::getSize() {
    return size;
}

int Table::getNumber() {
    return number;
}

Table::Table(int size, bool available, int number) {
	this->size = size;
	this->available = available;
	this->number = number;
	this->next = nullptr;
	this->previous = nullptr;
	this->combined = false;
    this->combinedTable = nullptr;
}

Table::Table(int size, bool available, int number, bool combined, Table* combinedTable) {
	this->size = size;
	this->available = available;
	this->number = number;
	this->next = nullptr;
	this->previous = nullptr;
	this->combined = combined;
    this->combinedTable = combinedTable;
}

Table::~Table() {
    delete next;
    delete previous;
    delete combinedTable;
}
