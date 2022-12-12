#include <functional>
#include <iostream>


using namespace std;


class Double {
  public:
    int operator()(int arg) {
      return arg * 2;
    }
};


void f(int arg) {};


int main() {
  function<void(int)> fn;

  fn = Double();
  fn = f;
  fn = [](int arg) {
    //
  };
}