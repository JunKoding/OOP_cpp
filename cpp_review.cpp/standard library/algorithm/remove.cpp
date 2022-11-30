#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



using namespace std;


int main() {
  string s = "Hello world. My name is MJU.";
  string::iterator newEnd = remove(s.begin(), s.end(), ' ');
  // 빈 칸을 삭제

  string s2 = string(s.begin(), newEnd);
  // 이렇게 해야 쓰레기값이 안들어간다.
  cout << s2 << endl;

  vector<int> v1 = {1, 2, 3, 4};
  vector<int>::iterator newEnd2 = remove(v1.begin(), v1.end(), 3);

  for(int element : v1) {
    cout << element << " ";
  } // 쓰레기 값 포함
  cout << "\n";

  for(vector<int>::const_iterator it = v1.begin(); it != newEnd2; it++) {
    cout << *it << " ";
  } // 끝을 newEnd로 처리하면 쓰레기 값이 포함되지않는다.
}