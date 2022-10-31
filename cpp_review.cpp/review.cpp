#include <iostream>


int main() {
  auto l = [](int a = 30) {
    std::cout << a << std::endl;
  };

  l();
  int a = 3000;
  l(a);

  return 0;
}