#include <iostream>


using namespace std;


int main() {
  int (*fptr)(int);
  fptr = [](int arg) {
    return arg * 100;
  }; // 함수 포인터 + 람다 표현

  cout << fptr(200) << endl;

  int cond = 100;

  auto lambda = [=](int arg, char c) {
    if(cond > 0) {
      cout << "pos" << endl;
    } else {
      cout << "neg" << endl;
    }
  }; // = 캡쳐식

  lambda(100, 'a');
}