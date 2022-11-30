#include <algorithm>
#include <iostream>


using namespace std;


class Double {
  public:
    int operator()(int i) {
      return i * 2;
    };
}; // functor


int main() {
  void (*fn)(int arg); // function pointer

  fn = [](int arg) {
    cout << arg << endl;
  }; // lambda

  fn(100);

  Double f; // functor
  cout << f(100) << endl;
}