#pragma once

#include <vector>

struct Point
{
private:
	double _x, _y;
public:
	Point(double x, double y);

	double X() const;
	double Y() const;
};

struct Segment
{
private:
	Point _p1, _p2;
public:
	Segment(Point p1, Point p2);

	const Point& P1() const;
	const Point& P2() const;
};

struct Rectangle
{
private:
	double _x1, _y1, _x2, _y2;
public:
	Rectangle();
	Rectangle(double x1, double y1, double x2, double y2);

	double X1() const; 
	double Y1() const;
	double X2() const;
	double Y2() const;
};

struct Poligonal
{
private:
	int pointCount;
	std::vector<Point> _vertices;
	Rectangle minimalRectangleEnvelope;
public:
	Poligonal(std::vector<Point> vertices);

	int lenght() const;
};
