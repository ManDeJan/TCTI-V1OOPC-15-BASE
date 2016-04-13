// example:
// declaration of a circle class that stores its window

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "window.hpp"

class circle {
private:
   int xc;
   int yc;
   int rx;
   int ry;
   window & w;
public:
   circle( window & w, int xc, int yc, int rx, int ry ):
      xc( xc ),
      yc( yc ),
      rx( rx ),
	  ry( ry ),
      w( w )
   {}
   void print();
};

#endif // CIRCLE_HPP