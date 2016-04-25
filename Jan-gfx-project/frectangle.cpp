#include "frectangle.hpp"

void frectangle::print(){
	for(int i = x0; i<=x1; i++){
		for(int j = y0; j<=y1; j++){
			w.draw(i, j);
		}
	}
}

