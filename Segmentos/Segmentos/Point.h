#pragma once

class Point 
{
private:
	double _x, _y;
public:
	Point();
	Point(double x, double y);

	double X() const;
	double Y() const;

	bool operator <(const Point& other) const {
		return _x < other._x || (_x == other._x && _y < other._y);
	}
};
