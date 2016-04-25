#pragma once
#include "window.hpp"

class cloud
{
private:
	int x, y = 32;
	bool rain, thunder;
	window & w;

public:
	cloud( window & w, int x, bool rain, bool thunder):
		x( x ),
		rain( rain ),
		thunder( thunder ),
		w( w ) {}
	void print();
};
