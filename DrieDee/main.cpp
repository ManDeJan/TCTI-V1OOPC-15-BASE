#include "window.hpp"
#include "line.hpp"
#include <cmath>
#include <cstdlib>

//var rotateX3D = function(theta) {
//    var sin_t = sin(theta);
//    var cos_t = cos(theta);
//
//    for (var n=0; n<nodes.length; n++) {
//        var node = nodes[n];
//        var y = node[1];
//        var z = node[2];
//        node[1] = y * cos_t - z * sin_t;
//        node[2] = z * cos_t + y * sin_t;
//    }
//};

void rotateX(int degrees, size_t length, int vertices[][3])
{
	float sinT = sin(degrees);
	float cosT = cos(degrees);
	int y = 0, z = 0;

	for(int v = 0; v <= length; v++) {
		y = vertices[v][1];
		z = vertices[v][2];
		vertices[v][1] = (y * cosT) - (z * sinT);
		vertices[v][2] = (z * cosT) + (y * sinT);
	}
}

void rotateY(int degrees, size_t length, int vertices[][3])
{
	float sinT = sin(degrees);
	float cosT = cos(degrees);
	int x = 0, z = 0;

	for(int v = 0; v <= length; v++) {
		x = vertices[v][0];
		z = vertices[v][2];
		vertices[v][0] = (x * cosT) - (z * sinT);
		vertices[v][2] = (z * cosT) + (x * sinT);
	}
}

void rotateZ(int degrees, size_t length, int vertices[][3])
{
	float sinT = sin(degrees);
	float cosT = cos(degrees);
	int x = 0, y = 0;

	for(int v = 0; v <= length; v++) {
		x = vertices[v][0];
		y = vertices[v][1];
		vertices[v][0] = (x * cosT) - (y * sinT);
		vertices[v][1] = (y * cosT) + (x * sinT);
	}
}

void draw(window & w, int length, int edges[][2], int vertices[][3], float scale = 1)
{
	for(int e = 0; e <= length; e++) {
		line(w, vertices[edges[e][0]][0]*scale + 64, vertices[edges[e][0]][1]*scale + 32, vertices[edges[e][1]][0]*scale + 64, vertices[edges[e][1]][1]*scale + 32).print();
		printf("%1f %f %f %f\n", vertices[edges[e][0]][0]*scale + 64, vertices[edges[e][0]][1]*scale + 32, vertices[edges[e][1]][0]*scale + 64, vertices[edges[e][1]][1]*scale + 32);
	}
}

int main()
{
	window w( 128, 64, 4 );
	float scale = 1;

	int vertices[][3] = {
		{ 16,  16,  16},
		{ 16,  16, -16},
		{ 16, -16,  16},
		{-16,  16,  16},
		{ 16, -16, -16},
		{-16,  16, -16},
		{-16, -16,  16},
		{-16, -16, -16},
	};

	int edges[][2] = {
		{0, 1},
		{0, 2},
		{0, 3},
		{1, 4},
		{1, 5},
		{2, 4},
		{2, 6},
		{3, 5},
		{3, 6},
		{4, 7},
		{5, 7},
		{6, 7},
	};

	rotateX(90, 7, vertices);
	rotateY(90, 7, vertices);
	rotateZ(90, 7, vertices);

	draw(w, 11, edges, vertices, scale);
	w.mainloop();
}
