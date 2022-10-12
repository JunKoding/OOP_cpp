#include <iostream>

class GrandParent {
  public:
    //int a;
};

class Parent1: public GrandParent {};

class Parent2: public GrandParent {};

class Child: public Parent1, public Parent2 {};

int main() {
  // Child c = Child();
  // c.a = 10;
  //c.Parent1::a = 10;
  std::cout << sizeof(Child) << std::endl;
  // virtual 붙이면 16, 안붙이면 2, 1, 0 정도 


  return 0;
}