#include <iostream>
#include "Vector.h"


int main() {
	double* qwer = new double[3] {3, 4, 5};
	double* tyui = new double[3] {0, 1, 2};
	Vector vect1(qwer, 3), vect2(tyui, 3);


	std::cout << vect1 * vect2;
}
