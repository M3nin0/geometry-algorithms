#include "Segment.h"
#include "GeometrySpace.h"

Segment::Segment(Point pStart, Point pFinal) : _pStart(pStart), _pFinal(pFinal) {}

Point Segment::PStart() const
{
	return _pStart;
}

Point Segment::PFinal() const
{
	return _pFinal;
}

bool Segment::Intersects(const Segment& other) const
{
	double s123 = CrossProduct(_pStart, _pFinal, other._pStart);
	double s124 = CrossProduct(_pStart, _pFinal, other._pFinal);

	if ((s123 == 0) && (s124 == 0))
	{
		if (_pStart.X() == _pFinal.X())
			return Overlap(_pStart.Y(), _pFinal.Y(),
				other._pStart.Y(), other._pFinal.Y());
		else
			return Overlap(_pStart.X(), _pFinal.X(),
				other._pStart.X(), other._pFinal.X());
	}
	else 
	{
		double s341 = CrossProduct(other._pStart, other._pFinal, _pStart);
		double s342 = CrossProduct(other._pStart, other._pFinal, _pFinal);
		return (((s123 * s124) <= 0) && (s341 * s342) <= 0);
	}
}
