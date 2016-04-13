// example:
// declaration of a line class that stores its window

#ifndef LINE_HPP
#define LINE_HPP

#include "window.hpp"
// example:
// declaration of a line class that stores its window

#include "line.hpp"

class line {
private:
   int x0;
   int y0; 
   int x1;
   int y1;
   window & w;
public:
   line( window & w, int start_x, int start_y, int end_x, int end_y ):
      x0( start_x ),
      y0( start_y ),
      x1( end_x ),
      y1( end_y ),
      w( w )
   {}
   void print();
};

#endif // LINE_HPP
