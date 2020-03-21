#ifndef _POINT_HEADER
#define _POINT_HEADER

class Point 
{
private:
	double _x, _y;
public:
	Point(double x, double y);

	double X() const;
	double Y() const;
};

#endif