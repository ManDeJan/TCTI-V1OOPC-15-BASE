#include "window.hpp"
#include "frectangle.hpp"

int main(int argc, char **argv)
{
	window w( 128, 64, 5 );

	frectangle box( w, 20, 10, 30, 20 );
	box.print();

	w.mainloop();
}
