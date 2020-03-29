#pragma once

class Point
{
private:
	double _x, _y;
public:
	Point(double x, double y);

	double X() const;
	double Y() const;
};

class Segment
{
private:
	Point p1, p2;
public:
	Segment(Point p1, Point p2);

	const Point& P1() const; 
	const Point& P2() const;
};
