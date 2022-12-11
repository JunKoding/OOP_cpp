#include <iostream>
#include <string>


using namespace std;

template <typename T>
class MyClass {
  public:
    MyClass();
    ~MyClass();

    T func(T arg);
    
};


template<typename T>
MyClass<T>::MyClass() {
  cout << "constructor called" << endl;
}


template<typename T>
MyClass<T>::~MyClass() {
  cout << "destructor called" << endl;
}


template<typename T>
T MyClass<T>::func(T arg) {
  return arg * 10000;
}


int main() {
  MyClass<int> obj;
  int value;
  value = obj.func(2);

  cout << "value : " << value << endl;
}