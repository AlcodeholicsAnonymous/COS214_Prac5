#pragma once
#include "Table.h"

class Booking{
protected:
	Table *table;
	bool isBooked;
public:
	Booking(Table *table);
	Table *getTable();
	
	bool getBooked();
	~Booking();
};


