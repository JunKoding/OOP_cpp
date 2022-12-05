#include <iostream>


template<typename T>
class MyClass {
  public:
    void swap(T& a, T& b);
};


template<typename T>
void MyClass<T>::swap(T& a, T& b) {
  T tmp;
  tmp = a;
  a = b;
  b = tmp;
}


int main() {
  int a = 300;
  int b = 200;

  MyClass<int> obj;
  obj.swap(a,b);

  std::cout << "a: " << a << " " << "b: " << b << std::endl;

}