// hwex4.cpp : Defines the entry point for the application.
// example:
// hwex4.exe < input-data.txt
#include "hwex4.h"
#include <cmath>
#include <fstream>
using namespace std;

double calc_len(point a, point b) {
	double len;
	double x_len, y_len;
	x_len = a.x - b.x;
	y_len = a.y - b.y;
	len = sqrt(pow(x_len, 2) + pow(y_len, 2));
	return len;
}

int main() 
{
	point triangle[3];
	for (int i = 0; i < 3; i++) {
		cin >> triangle[i].x >> triangle[i].y;
	}
	double perimeter=0;
	// walk triangle
	for (int i = 0; i < 3; i++) {
		int next_i = (i + 1) % 3;
		perimeter += calc_len(triangle[i], triangle[next_i]);
	}

	ofstream of;
	of.open("perimeter.txt");
	of << perimeter << endl;
	of.close();
	return 0;
}
