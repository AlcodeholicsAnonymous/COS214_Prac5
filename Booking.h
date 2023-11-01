#pragma once
#include "Table.h"

class Booking{
protected:
	Table *table;
	bool isBooked;
public:
	Booking(/* args */);
	Table *getTable();
    bool getBooked();
	~Booking();
};


