#include <cstdlib>
#include <iostream>


class MyException1 {};
class MyException2 {};
class MyException3 {};


void f() {
  int result = random() % 3;

  if(result == 0) {
    throw MyException1();
  } else if(result == 1) {
    throw MyException2();
  } else { 
    throw MyException3();
  }
}


using namespace std;


int main() {
  srand(time(NULL));

  try {
    f();
  } 
  
  catch(const MyException1& e) {
    cout << "1";
  }
  catch(const MyException2& e) {
    cout << "2";
  }
  catch(...) {
    cout << "all";
  }

  return 0;
}