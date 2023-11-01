#include "Booking.h"

using namespace std;

Booking::Booking(bool _hasBooking, int _table, int _size)
{
	size = _size;
	hasBooking = _hasBooking;
	tableNumber = _table;
}

Booking::Booking(int _size)
{
	size = _size;
	hasBooking = false;
	tableNumber = -1;
}
