#include <iostream>
#include <cstdlib>
#include <cassert>

using namespace std;


// Lambda
/*
int main() {
  int numPositives = 0;
  int array[] = { -1, 0, 1, 2, -2 };

  auto filter = [&numPositives](int toCheck) {
    if(toCheck > 0) {
      ++numPositives;
    }
  };
  
  for(int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
    filter(array[i]);
  }

  std::cout << numPositives;
}
*/


// for
/*
int main() {
  char str[] = "hello";

  for(auto& element : str) {
    if(element == '\0') {
      break;
    }

    element += 'A' - 'a';
  }

  cout << str;
}
*/


// function
/*
void f(int a = 10) { 
  cout << a << endl;
}


class MyClass {
  public:
    void g(int a = 20) {
      cout << a << endl;
    }
};


int main() {
  f();
  f(11);

  MyClass obj;
  obj.g();
  obj.g(21);

  auto l = [](int a = 30) {
    cout << a << endl;
  };

  l();
  l(31);
}
*/


// exception - exit(), abort()
/*
int main() {
  // exit(0);
  // abort();
}
*/


// exception - NDEBUG
/*
#define NDEBUG

#ifdef NDEBUG
  #define VALUE 1
#else 
  #define VALUE 2
#endif

int main() {
  cout << VALUE;
}
*/


// assert
/*
bool f() {
  cout << "f";
  return true;
}

int main() {
  //assert(1 == 2);
  assert(f() == true);
  // debug 버전에서는 가능한데 release에서는 assert()가 빈 함수니까 그냥 날아감!!
}
*/


// throw, try, catch

class MyException1 {};
class MyException2 {};
class MyException3 {};


void f() {
  int result = rand() % 3;
  if(result == 0) {
    throw MyException1();
  }
  else if (result == 1) {
    throw MyException2();
  }
  else {
    throw MyException3();
  }
}


int main() {
  srand(time(NULL));
  try {
    f();
  }
  catch (const MyException1& e) {
    cout << "1";
  }
  catch (const MyException2& e) {
    cout << "2";
  }
  catch (...) {
    cout << "all";
  }
}