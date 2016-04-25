// template

#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "ellipse.hpp"
#include "cloud.hpp"

int main(int argc, char **argv)
{
	window w( 128, 64, 5 );

	cloud(w, 64, 1, 1).print();

	w.mainloop();
}
