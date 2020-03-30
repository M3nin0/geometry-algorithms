#pragma once

double TriangleArea(const Point& a, const Point& b, const Point& c);
double TriangleOrientedArea(const Point& a, const Point& b, const Point& c); 

int RelativePositionPointSegment(const Point& p, const Point& a, const Point& b);

bool PointIsInTriangle(const Point& p, const Point& a, const Point& b, const Point& c);
bool PointIsOverPoint(const Point& p1, const Point& p2);
bool PointIsInSegment(const Point& p, const Point& a, const Point& b);
bool PointIsOverSegmentPoint(const Point& p, const Point& a, const Point& b);
