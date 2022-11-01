#include <iostream>


// using namespace mjuoop;
using namespace std;


class Matrix {
  private:
    double m[2][2]; // 2 * 2 행렬

  public:
    Matrix(); // 기본 생성자
    Matrix(const double arr[]); // 생성자
    ~Matrix(); // 소멸자

    Matrix operator+(const Matrix& a); // 행렬의 합
    Matrix operator-(const Matrix& a); // 행렬의 차
    Matrix operator*(const Matrix& a); // 행렬의 곱
    //Matrix operator=(const Matrix& a); // 행렬의 =

    Matrix& operator+=(const Matrix& a);
    Matrix& operator-=(const Matrix& a);
    Matrix& operator*=(const Matrix& a);

    explicit operator bool() const;// 명시적으로 bool type으로 변환
};


Matrix::Matrix() {
  // empty
}


Matrix::Matrix(const double arr[]) {
  // 초기화
  m[0][0] = arr[0];
  m[0][1] = arr[1];
  m[1][0] = arr[2];
  m[1][1] = arr[3];
}


Matrix::~Matrix() {
  // empty
}


Matrix Matrix::operator+(const Matrix& a) {
  Matrix b; // 새로운 행렬 생성
  
  for(int i = 0; i<2; i++) {
    for(int j = 0; j<2; j++) {
      b.m[i][j] = m[i][j] + a.m[i][j]; // 행렬의 덧셈
    }
  }

  return b;
}


Matrix Matrix::operator-(const Matrix& a) {
  Matrix b; 

  for(int i = 0; i<2; i++) {
    for(int j = 0; j<2; j++) {
      b.m[i][j] = m[i][j] - a.m[i][j]; // 행렬의 뺄셈
    }
  }

  return b;
}


Matrix Matrix::operator*(const Matrix& a) {
  Matrix b; 

  for(int i = 0; i<2; i++) {
    for(int j = 0; j<2; j++) {
      b.m[i][j] = m[i][j] * a.m[i][j]; // 행렬의 곱셈
    }
  }

  return b;
}

/*
Matrix Matrix::operator=(const Matrix& a) {
  for(int i = 0; i<2; i++) {
    for(int j = 0; j<2; j++) {
      m[i][j] = a.m[i][j]; // 복사
    }
  }
  return 0;
}
*/

Matrix& Matrix::operator+=(const Matrix& a) {
  for(int i = 0; i<2; i++) {
    for(int j = 0; j<2; j++) {
      m[i][j] = m[i][j] + a.m[i][j];
    }
  }

  return *this;
}


Matrix& Matrix::operator-=(const Matrix& a) {
  for(int i = 0; i<2; i++) {
    for(int j = 0; j<2; j++) {
      m[i][j] = m[i][j] - a.m[i][j];
    }
  }

  return *this;
}


Matrix& Matrix::operator*=(const Matrix& a) {
  for(int i = 0; i<2; i++) {
    for(int j = 0; j<2; j++) {
      m[i][j] = m[i][j] * a.m[i][j];
    }
  }

  return *this;
}



void checkIfZero(const Matrix& m) {
  if(m) {
    cout <<  "false\n";
  } else {
    cout << "true\n";
  }
}


Matrix:: operator bool() const {
  if((m[0][0] != 0) && (m[0][1] != 0) && (m[1][0] != 0) && (m[1][1] != 0)) {
    return true;
  }else {
    return false;
  }
}


int main() {
  const double zero[4] = {0.0, };
  Matrix mzero(zero);
  checkIfZero(mzero); // true 출력

  const double a[] = { 1.0, 2.0, 3.0, 4.0 };
  Matrix ma(a);

  const double b[] = { 5.0, 6.0, 7.0, 8.0 };
  Matrix mb(b);

  checkIfZero(ma + mb); // false 출력
}