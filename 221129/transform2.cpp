#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
  int l[] = {1, 2, 3, 4};
  vector<int> output;

  transform(l +0, l +4, back_inserter(output), [] (int e) {
    return e * 2;
  });

  for(int element : output) {
    cout << element << endl;
  }
}