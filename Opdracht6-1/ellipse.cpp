// example:
// definition of the functions of a circle class
// you are not expected to understand how circle::print works

#include "ellipse.hpp"
void ellipse::print()
{
	int x, y, p;
	x=0;
	y=ry;
	p=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
	while((2*x*ry*ry)<(2*y*rx*rx)) {
		w.draw(xc+x,yc-y);
		w.draw(xc-x,yc+y);
		w.draw(xc+x,yc+y);
		w.draw(xc-x,yc-y);

		if(p<0) {
			x=x+1;
			p=p+(2*ry*ry*x)+(ry*ry);
		} else {
			x=x+1;
			y=y-1;
			p=p+(2*ry*ry*x+ry*ry)-(2*rx*rx*y);
		}
	}
	p=((float)x+0.5)*((float)x+0.5)*ry*ry+(y-1)*(y-1)*rx*rx-rx*rx*ry*ry;

	while(y>=0) {
		w.draw(xc+x,yc-y);
		w.draw(xc-x,yc+y);
		w.draw(xc+x,yc+y);
		w.draw(xc-x,yc-y);

		if(p>0) {
			y=y-1;
			p=p-(2*rx*rx*y)+(rx*rx);

		} else {
			y=y-1;
			x=x+1;
			p=p+(2*ry*ry*x)-(2*rx*rx*y)-(rx*rx);
		}
	}
}
