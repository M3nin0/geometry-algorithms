#include <algorithm>

#include "Segment.h"
#include "SegmentAlgorithms.h"

double CrossProduct(const Point& p1, const Point& p2, const Point& p3)
{
	return (p2.X() - p1.X()) * (p3.Y() - p1.Y()) - (p2.Y() - p1.Y()) * (p3.X() - p1.X());
}

bool Overlap(double a, double b, double c, double d)
{
	return (std::min(a, b) <= std::max(c, d)) && (std::min(c, d) <= std::max(a, b));
}

bool SegmentIntersects(const Segment& s1, const Segment& s2)
{
	double s123 = CrossProduct(s1.PStart(), s1.PFinal(), s2.PStart());
	double s124 = CrossProduct(s1.PStart(), s1.PFinal(), s2.PFinal());

	if ((s123 == 0) && (s124 == 0))
	{
		if (s1.PStart().X() == s1.PFinal().X())
			return Overlap(s1.PStart().Y(), s1.PFinal().Y(),
				s2.PStart().Y(), s2.PFinal().Y());
		else
			return Overlap(s1.PStart().X(), s1.PFinal().X(),
				s2.PStart().X(), s2.PFinal().X());
	}
	else
	{
		double s341 = CrossProduct(s2.PStart(), s2.PFinal(), s1.PStart());
		double s342 = CrossProduct(s2.PStart(), s2.PFinal(), s1.PFinal());
		return (((s123 * s124) <= 0) && (s341 * s342) <= 0);
	}
}
