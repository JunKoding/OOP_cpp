#include <cstdlib>
#include <iostream>


using namespace std;

class MyException3 {};


void f() {
  throw MyException3();
}


int main() {
  try {
    f();
  }

  catch(const MyException1& e) {
    cout << "1";
  } // 맞는 객체가 없어서 abort()된다.

  return 0;
}