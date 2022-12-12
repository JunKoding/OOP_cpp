#include <iostream>


using namespace std;


int main() {
  int (*fptr)(int arg);

  fptr = [](int a) {
    return a * 10;
  };

  cout << fptr(300)  << endl;
}