// example:
// declaration of a ellipse class that stores its window

#ifndef ELLIPSE_HPP
#define ELLIPSE_HPP

#include "window.hpp"

class ellipse
{
private:
	int xc;
	int yc;
	int rx;
	int ry;
	window & w;
public:
	ellipse( window & w, int xc, int yc, int rx, int ry ):
		xc( xc ),
		yc( yc ),
		rx( rx ),
		ry( ry ),
		w( w )
	{}
	void print();
};

#endif // ELIPSE_HPP
