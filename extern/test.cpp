#include <iostream>


class MyClass {
  public:
    MyClass() {
      std::cout << "Constructor" << std::endl;
    }
    ~MyClass() {
      std::cout << "destructor" << std::endl;
    }
};

// void f() {
//   static MyClass c;
// }
void f() {
  std::cout << "f" << std::endl;
}


int main() {
  std::cout << "main start" << std::endl;
  f();
  std::cout << "main end" << std::endl;

  return 0;
}