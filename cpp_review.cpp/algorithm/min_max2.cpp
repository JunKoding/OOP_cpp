#include <algorithm>
#include <iostream>


using namespace std;


int main() {
  auto l = {1, 2, 3, 4, 5};

  int smallest = min(l);
  int biggest = max(l);

  cout << smallest << " " << biggest << endl;
}