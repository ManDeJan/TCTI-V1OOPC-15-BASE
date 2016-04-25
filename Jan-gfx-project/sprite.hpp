#pragma once
#include "window.hpp"

class fellipse
{
private:
	int x0;
	int y0;
	int x1;
	int y1;
	window & w;
public:
   frectangle( window & w, int start_x, int start_y, int end_x, int end_y ):
   		x0( start_x ),
		y0( start_y ),
		x1( end_x ),
		y1( end_y ),
		w( w ){}
	void print();
};
