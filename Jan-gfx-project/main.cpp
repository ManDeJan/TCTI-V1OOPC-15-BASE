// template

#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "ellipse.hpp"
#include "fellipse.hpp"

int main(int argc, char **argv)
{
	window w( 128, 64, 5 );

	line diagonal_line( w, 0, 0, 10, 0 );
	//diagonal_line.print();

	line diagonal2_line( w, 0, 2, 10, 3 );
	//diagonal2_line.print();

	line diagonal3_line( w, 0, 4, 10, 6 );
	//diagonal3_line.print();

	line diagonal4_line( w, 1, 1, 11, 5 );
	diagonal4_line.print();
	
	rectangle box( w, 20, 10, 30, 20 );
	box.print();

	ellipse ball( w, 64, 32, 1, 1 );
	//ball.print();
	
	fellipse fball( w, 64, 32, 10, 10 );
	fball.print();

	w.mainloop();
}
