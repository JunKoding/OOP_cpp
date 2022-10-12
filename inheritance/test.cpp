#include <iostream>

class Parent {
  public:
    virtual void f() {
      std::cout << "Parent" << std::endl;
    }
};

class Child: public Parent {
  public:
      void f() override {
      std::cout << "Child" << std::endl;
    }
};

int main() {
  Child c;
  Parent& p = c;

  c.f();
  p.f();
  //c.Parent::f(); // child에서 parent 부르고 싶을 때

  return 0;
}