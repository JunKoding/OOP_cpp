#include <iostream>


// friend
/*
class MyClass {
  private:
    int a;
    friend void f(const MyClass& ref);
};


void f(const MyClass& ref) {
  std::cout << ref.a << std::endl;
}


int main () {
  MyClass obj;
  f(obj);

  return 0;
}
*/


// call stack 
/*
void h() {
  std::cout << "교수님 끝내주세요,,," << std::endl;
}

void g() {
  h();
}

void f() {
  g();
}

int main() {
  f();
  return 0;
}
*/



// stack overflow1
/*
int sum(int n) {
  return n + sum(n-1);
}

int main() {
  sum(10);
}
// call stack이 너무 많음
*/

// stack overflow2
/*
void f() {
  int tooBig[65536 * 10];
}

int main() {
  f();
}
// 크기가 너무 큼
*/



// inline function