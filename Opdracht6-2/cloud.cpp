#include "line.hpp"
#include "fellipse.hpp"
#include "cloud.hpp"
#include <ctime>

void cloud::print()
{
	int r1, r2; // random ints
	srand(std::time(0));
	for(int i = -2; i <=1; i++) {
		r1 = rand() % 4;
		fellipse(w, x+i*8+r1, y+r1, 5, 5).print();
	}
	if(rain) {
		for(int i = 0; i <= (y * 2); i++) {
			r1 = x+(rand() % 40 - 20);
			r2 = 64 - (rand() % y);
			line(w, r1, r2, r1-3, r2+4).print();
		}
	}
}
