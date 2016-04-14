
#include "line.hpp"
#include "fellipse.hpp"
void fellipse::print()
{
	int x, y, p;
	x=0;
	y=ry;
	p=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
	while((2*x*ry*ry)<(2*y*rx*rx)) {
		line(w, xc+x, yc-y, xc+x, yc+y).print();
		line(w, xc-x, yc+y, xc-x, yc-y).print();
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
		line(w, xc+x, yc-y, xc+x, yc+y).print();
		line(w, xc-x, yc+y, xc-x, yc-y).print();

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
