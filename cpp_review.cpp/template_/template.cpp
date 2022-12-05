#include <iostream>


template<typename T>
void swap(T& a, T& b) {
  T tmp;
  tmp = a;
  a = b;
  b = tmp;
}


int main() {
  int a = 100;
  int b = 200;

  std::cout << "a: " << a << " " << "b: " << b << std::endl;

  swap<int>(a,b);

  std::cout << "a: " << a << " " << "b: " << b << std::endl;
}