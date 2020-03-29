#include "Point.h"

Point::Point() { }

Point::Point(double x, double y) : _x(x), _y(y) {};

double Point::X() const
{
	return _x;
}

double Point::Y() const
{
	return _y;
}
