#include <iostream>


using namespace std;


template<typename T>
class NumberUtil {
  public:
    T bigger(T& a, T& b);
};


template<typename T>
T NumberUtil<T>::bigger(T& a, T& b) {
  if(a>=b) {
    return a;
  } else {
    return b;
  }
}


int main() {
  NumberUtil<int> obj;
  int a = 200;
  int b = 300;

  int big = obj.bigger(a, b);

  cout << "bigger: " << big << endl;
  
  return 0;
}