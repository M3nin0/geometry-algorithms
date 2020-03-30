#include <iostream>
#include "GeometryType.h"

#include "BaseGeometryAlgorithms.h"

int main()
{
	Point p1(2, 2);
	Point p2(4, 4);
	Point p3(3, 3);

	std::cout << PointIsInSegment(p3, p1, p2) << std::endl;
	std::cout << PointIsOverSegmentPoint(p1, p1, p2) << std::endl;

	return 0;
}
