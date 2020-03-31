#include "GeometryType.h"
#include "BaseGeometryAlgorithms.h"
#include "SegmentAlgorithms.h"

bool SegmentsIsEquals(const Point& a, const Point& b, const Point& c, const Point& d)
{
	// the equality of both points is tested
	return (PointIsOverPoint(a, c) && PointIsOverPoint(b, d)) ||
		(PointIsOverPoint(a, d) && PointIsOverPoint(b, c));
}

bool SegmentsEdgeIsEquals(const Point& a, const Point& b, const Point& c, const Point& d)
{
	// checking that the segments are not overlapping and that there is only one end connected
	bool affirmativeOne = (PointIsOverPoint(a, c) && !PointIsInSegment(d, a, b) && !PointIsInSegment(b, c, d));
	bool affirmativeTwo = (PointIsOverPoint(a, d) && !PointIsInSegment(c, a, b) && !PointIsInSegment(b, c, d));
	bool affirmativeThree = (PointIsOverPoint(b, c) && !PointIsInSegment(d, a, b) && !PointIsInSegment(a, c, d));
	bool affirmativeFour = (PointIsOverPoint(b, d) && !PointIsInSegment(c, a, b) && !PointIsInSegment(a, c, d));

	return affirmativeOne || affirmativeTwo || affirmativeThree || affirmativeFour; 
}

bool SegmentsIsOverlap(const Point& a, const Point& b, const Point& c, const Point& d)
{
	bool edgeCIsInSegmentAB = RelativePositionPointSegment(c, a, b) == 0;
	bool edgeDIsInSegmentAB = RelativePositionPointSegment(d, a, b) == 0;

	if (edgeCIsInSegmentAB && edgeDIsInSegmentAB)
		return PointIsInSegment(c, a, b) || PointIsInSegment(d, a, b) || PointIsInSegment(a, c, d) || PointIsInSegment(b, c, d);
}
