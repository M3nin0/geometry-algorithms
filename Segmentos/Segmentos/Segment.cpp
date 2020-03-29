#include "Segment.h"

Segment::Segment(Point pStart, Point pFinal) : _pStart(pStart), _pFinal(pFinal) {}

Point Segment::PStart() const
{
	return _pStart;
}

Point Segment::PFinal() const
{
	return _pFinal;
}
