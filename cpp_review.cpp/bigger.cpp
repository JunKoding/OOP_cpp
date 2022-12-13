#include <iostream>


using namespace std;


template<typename T>
T bigger(const T a, const T b) {
  if(a >= b) {
    return a;
  } else {
    return b;
  }
}


int main() {
  cout << bigger(10, 20) << endl;
  cout << bigger<int>(10, 20) << endl;

  cout << bigger(10.5, 20.5) << endl;
  cout << bigger<double>(10.5, 20.5) << endl;

  return 0;
}