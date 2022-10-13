#include <iostream>

class MyClass {
  private:
    int a;
    friend void f(MyClass& ref);
};


void f(MyClass& ref) {
  std::cout << ref.a << std::endl;
}


int main() {
  MyClass obj;
  f(obj);

  return 0;
}