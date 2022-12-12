#include <iostream>


using namespace std;


int main() {
  cout << 1.0 << endl;
  cout.setf(ios::fixed);
  cout << 1.0 << endl;

  cout << 100 << endl;
  cout.unsetf(ios::dec);
  cout.setf(ios::hex | ios::showbase);
  cout << 100 << endl;

  cout.unsetf(ios::hex);
  cout << 200 << endl;
  cout.width(5);
  cout.fill('0');
  cout << 200 << endl;
  
  cout << 4.0 / 3 << endl;
  cout.precision(3);
  cout << 4.0 /3 << endl;
}