#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
  // array 버전
  int l[] = {1, 2, 3, 4, 5, 6};
  int* found = find_if(l + 0, l + 6, [](int arg) {
    return arg % 2 == 0;
  }); // 첫번째 짝수 반환

  if(found != nullptr) {
    cout << *found << endl;
  } else {
    cout << "error" << endl;
  }
  
  // vector 버전
  vector<int> v = {1, 2, 3, 4, 5, 6};
  vector<int>::iterator found2 = find_if(v.begin(), v.end(), [](int arg2) {
    return arg2 % 2 == 0;
  });

  if(found2 != v.end()) {
    cout << *found << endl;
  } else {
    cout << "error" << endl;
  }
}