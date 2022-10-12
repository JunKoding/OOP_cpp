// #include <iostream>

// class Parent {
//   public:
//     virtual void f() {};
// };


// class Child: public Parent {
//   public:
//     void f() {
//       std::cout << "Child" << std::endl;
//     }
// };


// class Child2: public Parent {
//   public:
//     void f() {
//       std::cout << "Child2" << std::endl;
//     }
// };



// int main() {
//   Child c;
//   Parent& p = c;

//   Child2& casted = dynamic_cast<Child2&>(p);
//   casted.f();

//   return 0;
// }

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

void f() {
  static MyClass c;
}


int main() {
  std::cout << "main start" << std::endl;
  f();
  std::cout << "main end" << std::endl;

  return 0;
}