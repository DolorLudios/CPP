#include <iostream>
#include "shapes.h"

using namespace std;

int main() {
	try {
		Shape* circle = new Ellipse(5,-6);
		Shape* rectangle = new Rectangle(6, 8);
		circle->Display();
		rectangle->Display();
	}
	catch (std::logic_error) {
		cerr << "Error: parameters are negative" << endl;
	};
	return 0;
}