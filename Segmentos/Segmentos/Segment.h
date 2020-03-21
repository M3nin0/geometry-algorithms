#ifndef _SEGMENT_HEADER
#define _SEGMENT_HEADER

#include "Point.h"

class Segment
{
private:
	Point _pStart, _pFinal;
public:
	Segment(Point pStart, Point pFinal);

	Point PStart() const;
	Point PFinal() const;

	bool Intersects(const Segment& other) const;
};

#endif // !_SEGMENT_HEADER
