#include "fractions.h"
#include <iostream>

using namespace std;

int main() {
	Fraction a, b;
	a.Input();
	b.Input();

	Fraction first = a * b;
	Fraction second = a + b;
	double value = 3.0 + double(a);
	a.Print();
	b.Print();
	first.Print();
	second.Print();
	cout << value << endl;
}