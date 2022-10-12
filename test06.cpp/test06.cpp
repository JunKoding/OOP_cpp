#include <iostream>
void f() {
  int a = 10;
  std::cout << "Variable a is now " << a << std::endl;
}

int main() {
  std::cout << "Hello World!\n"; 
  f();

  return 0;
}