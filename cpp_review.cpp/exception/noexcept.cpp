#include <iostream>


using namespace std;


class MyException1 {};


void f() noexcept {
  throw MyException1();
}


int main() {
  try {
    f();
  }
  
  catch(const MyException1& e) {
    cout << "1";
  } // f가 noexcept이므로 abort() 발생
  
  return 0;
}