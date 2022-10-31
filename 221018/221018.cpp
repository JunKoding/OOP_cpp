#include <iostream>


using namespace std;


class Matrix {
  public:
    Matrix() {}

    Matrix(const Matrix& a) {
      cout << "copy constructor" << endl;
    }

    Matrix(Matrix&& a) {
      cout << "move constructor" << endl;
    }

    Matrix& operator=(const Matrix& b) {
      cout << "copy assignment operator" << endl;
      return* this;
    }

    Matrix& operator=(Matrix&& b) {
      cout << "move assingment operator" << endl;
      return* this;
    }
};


int main() {
  Matrix x;
  Matrix y = x;
  Matrix z = std::move(x);

  Matrix a, b ,c;
  b = a;
  c = std::move(a);

  return 0;
}