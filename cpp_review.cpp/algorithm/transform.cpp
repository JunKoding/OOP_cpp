#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
  // array 버전
  int l[] = {1, 2, 3, 4, 5};
  int output[5] = {};

  transform(l + 0, l + 5, output, [](int arg) {
    return arg * 100;
  });

  for(int element : output) {
    cout << element << " ";
  }
  cout << "\n";

  // container로 쓸 때는 back_inserter(c)로 써야함
  // vector 버전
  vector<int> v = {1, 2, 3, 4};
  vector<int> output2;

  transform(v.begin(), v.end(), back_inserter(output2), [](int arg) {
    return arg * 2;
  });

  for(vector<int>::const_iterator it = output2.begin(); it != output2.end(); it++) {
    cout << *it << " ";
  }
}