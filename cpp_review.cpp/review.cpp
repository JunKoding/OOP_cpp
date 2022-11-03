#include <iostream>


//using namespace std;

// exception 
/*
class MyException {};


class MyClass {
  public:
    ~MyClass();
};


MyClass::~MyClass() {
  cout << "dtor" << endl;
}


void g() {
  MyClass obj;
  throw MyException();
}


void f() {
  g();
}


int main() {
  try {
    f();
  }

  catch(const MyException& e) {
    cout << "Exception" << endl;
  }
}
*/


// template
/*
template<typename T>
void swap(T& a, T& b) {
  T tmp = b;
  b = a;
  a = tmp;
}


int main() {
  int a = 30;
  int b = 50;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  char c = 'c';
  char d = 'd';
  std::cout << "c: " << c << std::endl;
  std::cout << "d: " << d << std::endl;

  swap<int>(a,b);
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  swap<char>(c,d);
  std::cout << "c: " << c << std::endl;
  std::cout << "d: " << d << std::endl;
}
*/
template<typename T>
class NumberUtil {
  public:
    const T& bigger(const T& a, const T& b);
};

template<typename T>
const T& NumberUtil<T>::bigger(const T& a, const T& b) {
  return (a>=b) ? a:b;
}


int main() {
  NumberUtil<int> intUtil;
  std::cout << intUtil.bigger(10,20) << std::endl;

  NumberUtil<double> doubleUtil;
  std::cout << doubleUtil.bigger(10.5,20.5) << std::endl;
}

