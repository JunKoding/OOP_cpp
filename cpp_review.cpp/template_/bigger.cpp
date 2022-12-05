#include <iostream>


using namespace std;


template<typename T>
T bigger(T& a, T& b) {
  if(a >= b) {
    return a;
  } else {
    return b;
  }
}


int main() {
  int a = 100;
  int b = 1;

  int big = bigger<int>(a, b);
  
  cout << "bigger: " << big << endl;

  double c = 3.14;
  double d = 6.28;

  double bigg = bigger<double>(c, d);

  cout << "bigger: " << bigg << endl;


}