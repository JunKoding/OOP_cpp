#include <cassert>
#include <iostream>

#include "operator.h"
#include "operator.cpp"

using namespace std;
using namespace mjuoop;

void checkIfZero(const Matrix& m) {
	if (m)  cout << "false\n";
	else cout << "true\n";
}


int main() {
	const double a[] = {1.0, 2.0, 3.0, 4.0};
	const Matrix ma(a);

	cout << "Matrix a is " << ma << " and its size is 2x2.";
	// Matrix a is (1.0, 2.0), (3.0, 4.0) and its size is 2x2.
}
