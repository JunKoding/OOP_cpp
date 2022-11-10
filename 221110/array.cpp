#include <array>
#include <iostream>


using namespace std;


// array
int main() {
  array<int, 3> a = {1, 2, 3 };
  cout << a.size() << endl;

  a[1] = 4;

  for(auto& element : a) {
    cout << element << endl;
  }
}