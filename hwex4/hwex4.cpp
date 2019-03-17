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
	for (int i = 0; i < 3; i++) {
		cout << "point" << triangle[i].x << triangle[i].y << endl;
	}

	cout << "Hello CMake." << endl;
	return 0;
}
