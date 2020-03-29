#pragma once

#include "Point.h"

class Segment
{
private:
	Point _pStart, _pFinal;
public:
	Segment(Point pStart, Point pFinal);

	Point PStart() const;
	Point PFinal() const;
};
