#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
  int l[] = {4, 3, 2, 1};
  sort(l + 0, l + 4);

  for(int e : l) {
    cout << e << " ";
  }
  cout << "\n";

  vector<int> v = {4, 3, 2, 1};
  sort(v.begin(), v.end());

  for(auto p = v.begin(); p != v.end(); p++) {
    cout << *p << " ";
  }
  cout << "\n";

  // 명시적으로 sort함수 사용하기
  // 짝수부터 정렬
  auto cmp = [](int a, int b) {
    if((a % 2 == 0) && (b % 2 == 1)) {
      return true;
    } else {
      return false;
    } // a,b가 짝홀이면 true 반환
  };

  int l2[] = {6, 5, 4, 3, 2, 1};
  sort(l2 + 0, l2 + 6, cmp); 
  
  for(int e1 : l2) {
    cout << e1 << " ";
  }
  cout << "\n";
}