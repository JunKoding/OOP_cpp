#include <iostream>


using namespace std;


void f(int a = 10) {
  cout << a << endl;
}


class MyClass {
  public:
    void g(int a = 20) {
      cout << a << endl;
    };
};


int main() {
  f();
  f(100); // free function

  MyClass obj;
  obj.g();
  obj.g(200); // class의 method

  auto l = [](int a = 30) {
    cout << a << endl;
  };

  l();
  l(300); // lambda 스타일

  return 0;
}