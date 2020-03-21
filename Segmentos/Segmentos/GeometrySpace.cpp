#include "Point.h"
#include <algorithm>

double CrossProduct(const Point& p1, const Point& p2, const Point& p3)
{
	return (p2.X() - p1.X()) * (p3.Y() - p1.Y()) - (p2.Y() - p1.Y()) * (p3.X() - p1.X());
}

bool Overlap(double a, double b, double c, double d)
{
	return (std::min(a, b) <= std::max(c, d)) && (std::min(c, d) <= std::max(a, b));
}
