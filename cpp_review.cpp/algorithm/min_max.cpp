#include <algorithm>
#include <iostream>


using namespace std;


int main() {
  auto l = {1, 2, 3, 4};
  
  int smallest = min(l);
  int biggest = max(l);
  int m = 1000000;

  for(int element : l) {
    m = min(m, element);
  }

  cout << m << endl;
}