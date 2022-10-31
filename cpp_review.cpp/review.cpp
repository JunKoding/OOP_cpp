#include <iostream>


class Parent {
  public:
    int c;
    Parent() : c(1) {};
};


class Child : public Parent {
  public:
    int c;
    Child() : c(2) {};
};


int main() {
  Child c = Child();
  Parent& p = c;

  std::cout << sizeof(c) << std::endl; // 8
  std::cout << c.c << std::endl; // 2
  std::cout << p.c << std::endl; // 1
}