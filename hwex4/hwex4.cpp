// hwex4.cpp : Defines the entry point for the application.
// example:
// hwex4.exe < input-data.txt
#include "hwex4.h"

using namespace std;

int main() 
{
	point triangle[3];
	for (int i = 0; i < 3; i++) {
		cin >> triangle[i].x >> triangle[i].y;
	}
	// walk triangle
	for (int i = 0; i < 3; i++) {
		int next_i = (i + 1) % 3;
		cout << " point" << i << ":" << triangle[i].x << ";" << triangle[i].y;
		cout << " point" << next_i << ":" << triangle[next_i].x << ";" << triangle[next_i].y;
		cout << endl;
	}

	cout << "Hello CMake." << endl;
	return 0;
}
