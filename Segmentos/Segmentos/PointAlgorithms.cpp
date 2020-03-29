#include <vector>
#include <algorithm>

#include "Point.h"
#include "PointAlgorithms.h"

double PointCrossProduct(const Point& p0, const Point& p1, const Point& p2)
{
	return (p1.X() - p0.X()) * (p2.Y() - p0.Y()) - (p1.Y() - p0.Y()) * (p2.X() - p0.X());
}

std::vector<Point> ConvexHull(std::vector<Point> points)
{
	size_t n = points.size(), k = 0;
	if (n <= 3) return points;
	std::vector<Point> convexHullPoints(n * 2);

	sort(points.begin(), points.end());
	
	for (size_t i = 0; i < n; ++i)
	{
		while (k >= 2 &&
			PointCrossProduct(convexHullPoints[k - 2], convexHullPoints[k - 1], points[i]) <= 0) k--;
		convexHullPoints[k++] = points[i];
	}

	for (size_t i = n - 1, t = k + 1; i > 0; --i) {
		while (k >= t && 
			PointCrossProduct(convexHullPoints[k - 2], convexHullPoints[k - 1], points[i - 1]) <= 0) k--;
		convexHullPoints[k++] = points[i - 1];
	}

	convexHullPoints.resize(k - 1);
	return convexHullPoints;
}
