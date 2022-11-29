#include <algorithm>
#include <iostream>


using namespace std;


int main() {
  int l[] = {1, 2, 3, 4};
  int output[4] = {};

  transform(l +0, l +4, output, [] (int e) {
    return e * 2;
  });

  for(int element : output) {
    cout << element << endl;
  }
  
  return 0;
}