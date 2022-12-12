#include <iostream>


using namespace std;


class Double {
  public:
    int operator()(int arg) {
      return arg * 2;
    }
};


int main() {
  Double f;
  cout << f(123) << endl;
}