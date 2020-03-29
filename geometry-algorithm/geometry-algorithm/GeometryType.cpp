#include <vector>

#include "GeometryType.h"

Point::Point(double x, double y): _x(x), _y(y) { }

double Point::X() const
{
	return _x;
}

double Point::Y() const
{
	return _y;
}

Segment::Segment(Point p1, Point p2): _p1(p1), _p2(p2) { }

const Point& Segment::P1() const
{
	return _p1;
}

const Point& Segment::P2() const
{
	return _p2;
}

Rectangle::Rectangle() {  }
Rectangle::Rectangle(double x1, double y1, double x2, double y2): _x1(x1), _y1(y1), _x2(x2), _y2(y2) { }

double Rectangle::X1() const
{
	return _x1;
}

double Rectangle::Y1() const
{
	return _y1;
}

double Rectangle::X2() const
{
	return _x2;
}

double Rectangle::Y2() const
{
	return _y2;
}

Poligonal::Poligonal(std::vector<Point> vertices): _vertices(vertices) {}

int Poligonal::lenght() const
{
	return _vertices.size();
}