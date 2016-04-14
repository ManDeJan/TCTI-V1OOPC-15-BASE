// example:
// declaration of a fellipse class that stores its window

#pragma once
#include "window.hpp"

class fellipse
{
private:
	int xc;
	int yc;
	int rx;
	int ry;
	window & w;
public:
	fellipse( window & w, int xc, int yc, int rx, int ry ):
		xc( xc ),
		yc( yc ),
		rx( rx ),
		ry( ry ),
		w( w )
	{}
	void print();
};
