#include  <iostream>


using namespace std;

// stack un-winding
/*
class MyException1 {};


class MyClass {
  public:
    ~MyClass() {
      cout << "dtor" << endl;
    }
};


void g() {
  MyClass obj;
  throw MyException1();
}


void f() {
  g();
}


int main() {
  try {
    f();
  }
  catch (const MyException1& e) {

    cout << "1" << endl;
  }
}
*/


// noexcept
/*
class MyException {};


void f() noexcept {
  throw MyException();
}


int main() {
  try {
    f();
  }
  catch (...) {
    cout << "catch" << endl;
  }
  // abort() 발생
}
*/


// template 1
/*
template <typename T>
const T& bigger(const T& a, const T&b) {
  return (a>=b) ? a:b;
}


int main () {
  cout << bigger(10, 20) << endl;
  cout << bigger<int>(10, 20) << endl;
  
  cout << bigger(10.5, 20.5) << endl;
  cout << bigger<double>(10.5, 20.5) << endl;
}
*/

// template 2
/*
template<typename T>
class NumberUtil {
  public:
    const T& bigger(const T& a, const T& b) const;
};


template<typename T>
const T& NumberUtil<T>::bigger(const T& a, const T& b) const {
  return (a>=b) ? a:b;
}


int main() {
  NumberUtil<int> intUtil;
  cout << intUtil.bigger(10, 20) << endl;

  NumberUtil<double> doubleUtil;
  cout << doubleUtil.bigger(10.5, 20.5) << endl;
}
*/

// template 3
/**/
template<typename T>
bool isFalse(T arg) {
  std::cout << "version 1\n";
  return arg == T();
}


template<>
bool isFalse<const char*>(const char* arg) {
  std::cout << "version 2\n";
  return arg == NULL || arg[0] == '\0';
}


int main() {
  isFalse(0);
  isFalse("");
}