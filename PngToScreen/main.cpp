#include <iostream>
#include "window.hpp"
#include "CImg.h"

using namespace cimg_library;

int main()
{
	window w( 128, 64, 1 );
	CImg<unsigned char> image("test5.png");
	int errarray[128] = {0};
	int nextpixel = 0;
	int thispixel = 0;
	int	errorseg = 0;
	int xpos = 155, ypos = 0;

	for (int y = 0; y < 64; y++) {
		for (int x = 0; x < 128; x++) {
			//thispixel = (image(x+xpos,y+ypos,0,0) + image(x+xpos,y+ypos,0,1) + image(x+xpos,y+ypos,0,2))/3;
			thispixel = image(x+xpos,y+ypos,0,0)*0.2989 + image(x+xpos,y+ypos,0,1)*0.5870 + image(x+xpos,y+ypos,0,2)*0.114;
			thispixel += errarray[x];
			thispixel += nextpixel;
			if (thispixel > 127) {
				errorseg = (thispixel - 255)/4;
				w.draw(x,y);
			} else {
				errorseg = thispixel/4;
			}
			errarray[x-1] += errorseg;
			errarray[x] = errorseg;
			nextpixel = 2*errorseg;
		}
	}
	w.mainloop();
}
