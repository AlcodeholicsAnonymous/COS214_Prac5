#pragma once

#include <iostream>

class Booking
{
private:
	bool hasBooking;
	int tableNumber;
	int size;
public:
	Booking(bool _hasBooking, int _tableNumber, int _size);
	Booking(int _size);
	bool getBooked() { return hasBooking; }
	int getTable() { return tableNumber; }
	int getSize() { return size; }
};
