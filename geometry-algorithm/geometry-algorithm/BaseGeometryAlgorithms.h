#pragma once

double TriangleOrientedArea(const Point& a, const Point& b, const Point& c); 

double TriangleArea(const Point& a, const Point& b, const Point& c);

bool PointIsInTriangle(const Point& p, const Point& a, const Point& b, const Point& c);

int RelativePositionPointSegment(const Point& p, const Point& a, const Point& b);
