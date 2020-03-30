#include "GeometryType.h"
#include "BaseGeometryAlgorithms.h"
#include "SegmentAlgorithms.h"

bool SegmentsIsEquals(const Point& a, const Point& b, const Point& c, const Point& d)
{
	// the equality of both points is tested
	return (PointIsOverPoint(a, c) && PointIsOverPoint(b, d)) ||
		(PointIsOverPoint(a, d) && PointIsOverPoint(b, c));
}
