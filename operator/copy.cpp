#pragma once

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
}


#include <cassert>
#include <iostream>

//#include "matrix.h"

using namespace std;
using namespace mjuoop;

void checkIfZero(const Matrix& m) {
	if (m)  cout << "false\n";
	else cout << "true\n";
}


int main() {
	// 2x2 여야만 한다고 확인
	assert(Matrix::NUM_ROWS == 2);
	assert(Matrix::NUM_COLS == 2);

	const double zero[4] = { 0.0, };
	Matrix mzero(zero);

	// 1. operator bool() 테스트
	checkIfZero(mzero);  // true 출력

	const double a[] = { 1.0, 2.0, 3.0, 4.0 };
	Matrix ma(a);

	const double b[] = { 5.0, 6.0, 7.0, 8.0 };
	Matrix mb(b);

	// 2. operator+() 및 operatpr-() 테스트
	checkIfZero(ma + mb);  // false 출력
	checkIfZero(ma - ma);  // true 출력

	const double c[] = { a[0] * 2, a[1] * 2, a[2] * 2, a[3] * 2 };
	const Matrix mc(c);
	checkIfZero((ma + ma) - mc);  // true 출력

	// 3. operator*() 테스트
	const double d[] = {
		a[0] * b[0] + a[1] * b[2],
		a[0] * b[1] + a[1] * b[3],
		a[2] * b[0] + a[3] * b[2],
		a[2] * b[1] + a[3] * b[3]
	};
	const Matrix md(d);
	checkIfZero((ma * mb) - md);  // true 출력

	// 4. operator-=() 테스트
	ma -= ma;
	checkIfZero(ma);  // true

	// 5. operator+=() 테스트
	mb += mb;
	const double e[] = { b[0] * 2, b[1] * 2, b[2] * 2, b[3] * 2 };
	const Matrix me(e);
	checkIfZero(mb - me);  // true

	// 6. operator*=() 테스트
	ma = Matrix(a);
	mb = Matrix(b);
	ma *= mb;
	checkIfZero(ma - md);  // true
}
