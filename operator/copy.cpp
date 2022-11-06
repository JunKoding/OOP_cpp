//#pragma once
#include <iostream>
#include <cassert>

namespace mjuoop {
	class Matrix {
	public:
		static const int NUM_ROWS = 2;
		static const int NUM_COLS = 2;

	private:
		static const int NUM_ELEMENTS = NUM_ROWS * NUM_COLS;

		inline static int xyToIndex(const int x, const int y) {
			return x * NUM_COLS + y;
		}

		double values[NUM_ELEMENTS];

	public:
		Matrix(const double* values);

		Matrix operator+(const Matrix& b) const;
		Matrix operator-(const Matrix& b) const;
		Matrix operator*(const Matrix& b) const;

		Matrix& operator+=(const Matrix& b);
		Matrix& operator-=(const Matrix& b);
		Matrix& operator*=(const Matrix& b);

		operator bool() const;
		friend std::ostream& operator<<(std::ostream& os, const Matrix& b);
	};
}

//#include "matrix.h"

namespace mjuoop {
	Matrix::Matrix(const double* values) {
		for (int i = 0; i < NUM_ELEMENTS; ++i) {
			this->values[i] = values[i];
		}
	}

	Matrix Matrix::operator+(const Matrix& b) const {
		double newValues[NUM_ELEMENTS] = {};

		for (int i = 0; i < sizeof(values) / sizeof(values[0]); ++i) {
			newValues[i] = values[i] + b.values[i];
		}

		return Matrix(newValues);
	}

	Matrix Matrix::operator-(const Matrix& b) const {
		double newValues[NUM_ELEMENTS] = {};

		for (int i = 0; i < sizeof(values) / sizeof(values[0]); ++i) {
			newValues[i] = values[i] - b.values[i];
		}

		return Matrix(newValues);
	}

	Matrix Matrix::operator*(const Matrix& b) const {
		double newValues[NUM_ELEMENTS] = {};
		for (int i = 0; i < NUM_ROWS; ++i) {
			for (int j = 0; j < NUM_COLS; ++j) {
				double sum = 0.0;
				for (int k = 0; k < NUM_COLS; ++k) {
					sum += values[xyToIndex(i, k)] * b.values[xyToIndex(k, j)];
				}
				newValues[xyToIndex(i, j)] = sum;
			}
		}

		return Matrix(newValues);
	}

	Matrix& Matrix::operator+=(const Matrix& b) {
		*this = this->operator+(b);
		return *this;
	}

	Matrix& Matrix::operator-=(const Matrix& b) {
		*this = this->operator-(b);
		return *this;
	}

	Matrix& Matrix::operator*=(const Matrix& b) {
		*this = this->operator*(b);
		return *this;
	}

	Matrix::operator bool() const {
		for (int i = 0; i < NUM_ELEMENTS; ++i) {
			if (values[i] != 0.0) {
				return true;
			}
		}
		return false;
	}

	std::ostream& operator<<(std::ostream& os, const Matrix& b) {
		os << "(" << b.values[0] << ", " << b.values[1] << ")" << ", " << "(" << b.values[2] << ", " << b.values[3] << ")";
		return os;
	}
}


//#include <cassert>
//#include <iostream>

//#include "matrix.h"

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
