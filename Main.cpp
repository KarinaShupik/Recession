#include "Triad.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

int main() {

	Triad side(5, 10, 7);
	side.Display();

	Triangle corner(13, 15, 4);
	corner.Display();

	system("PAUSE");

}
