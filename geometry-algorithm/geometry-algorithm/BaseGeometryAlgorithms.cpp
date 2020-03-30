#include <cmath>
#include "GeometryType.h"

#include "BaseGeometryAlgorithms.h"

double TriangleOrientedArea(const Point& a, const Point& b, const Point& c)
{
	return ((a.X() * c.Y() - a.Y() * c.X() + a.Y() * b.X() - a.X() * b.Y() + c.X() * b.Y() - c.Y() * b.X())) / 2.0;
}

double TriangleArea(const Point& a, const Point& b, const Point& c)
{
	return std::abs(TriangleOrientedArea(a, b, c));
}

bool PointIsInTriangle(const Point& p, const Point& a, const Point& b, const Point& c)
{
	double s = TriangleOrientedArea(a, b, c);

	double lambdaOne = TriangleOrientedArea(p, b, c) / s;
	double lambdaTwo = TriangleOrientedArea(a, p, c) / s;
	double lambdaThree = TriangleOrientedArea(a, b, p) / s;

	return (lambdaOne > 0) && (lambdaTwo > 0) && (lambdaThree > 0);
}

bool PointIsOverPoint(const Point& p1, const Point& p2)
{
	return ((p1.X() == p2.X()) && (p1.Y() == p2.Y()));
}

bool PointIsInSegment(const Point& p, const Point& a, const Point& b)
{
	if (RelativePositionPointSegment(a, b, p) == 0)
	{
		// Verify if p is not the segment start or end point
		if (a.X() != b.X())
			return ((a.X() < p.X()) && (p.X() < b.X())) ||
			((a.X() > p.X()) && (p.X() > b.X()));
		else
			return ((a.Y() < p.Y()) && p.Y() < b.Y()) ||
			((a.Y() > p.Y()) && (p.Y() > b.Y()));
	}
	return false;
}

bool PointIsOverSegmentPoint(const Point& p, const Point& a, const Point& b)
{
	return (PointIsOverPoint(p, a) || PointIsOverPoint(p, b));
}

int RelativePositionPointSegment(const Point& p, const Point& a, const Point& b)
{
	double s = TriangleOrientedArea(a, b, p);

	if (s < 0) return -1;
	else if (s > 0) return 1;
	else return 0;
}
