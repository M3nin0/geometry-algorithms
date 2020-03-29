#include <iostream>

#include "Point.h"
#include "Segment.h"
#include "SegmentAlgorithms.h"

int main()
{
	Point p1(1., 1.);
	Point p2(4., 4.); 
	Point p3(1., 4.);
	Point p4(4., 1.);

	Segment s1(p1, p2);
	Segment s2(p3, p4);
	Segment s3(p1, p4);
	Segment s4(p3, p2);
	Segment s5(p1, p2);
	Segment s6(p1, p2);

	std::cout << "Intersecção (Verdadeiro) " << SegmentIntersects(s1, s2) << std::endl;
	std::cout << "Intersecção (Falso) " << SegmentIntersects(s3, s4) << std::endl;
	std::cout << "Intersecção (Overlap) " << SegmentIntersects(s5, s6) << std::endl;

	return 0;
}
