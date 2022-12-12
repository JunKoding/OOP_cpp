#include <iomanip>
#include <iostream>


using namespace std;


int main() {
  cout << 1.0 << endl;
  cout << fixed << 1.0 << endl;

  cout << 100 << endl;
  cout << hex << showbase << 100 << endl;

  cout << dec << setw(5) << setfill('0') << 100 << endl;
}