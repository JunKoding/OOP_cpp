#include <iostream>


using namespace std;


class MyException1 {};


class MyClass {
  public:
    ~MyClass() {
      cout << "destructor called" << endl;
    }
};


void g() {
  MyClass obj;
  throw MyException1();
}


void f() {
  g();
}


int main() {
  try {
    f();
  }

  catch(const MyException1& e) {
    cout << "1" << endl;
  }

  return 0;
}