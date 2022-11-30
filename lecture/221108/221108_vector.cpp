#include <iostream>
#include <vector>

using namespace std;


// vector
int main() {
  vector<int> v1;
  cout << v1.empty() << endl; // 비어있는지 여부 확인
  cout << v1.size() << endl; // 개수 확인
  cout << "=====v1=====" << endl;

  vector<int> v2 = {1, 2, 3};
  cout << v2.empty() << endl;
  cout << v2.size() << endl;
  cout << "=====v2=====" << endl;

  vector<int> v3 = v2;
  v3.clear(); //container를 비운다
  cout << v3.empty() << endl;
  cout << "=====v3=====" << endl;

  vector<int> v4;
  v4.push_back(1); // 맨 마지막에 원소 추가
  v4.push_back(2);
  v4.pop_back(); // 맨 마지막 원소 삭제
  for(const int& a : v4) {
    // 범위 지정 연산자로 원소에 접근할 수 있다.
    cout << a << endl;
  }
  cout << "=====v4=====" << endl;

  vector<int> v5;
  v5.push_back(1);
  v5.push_back(2);
  v5.push_back(3);
  cout << v5.front() << endl; // 맨 처음 원소 접근
  cout << v5.back() << endl; // 맨 마지막 원소 접근
  cout << "=====v5=====" << endl;

  vector<int> v6 = {1, 2, 3};
  cout << v6.at(0) << endl; // bound check 한다
  cout << v6[1] << endl; // bound check 안한다.
  cout << "=====v6=====" << endl;

  vector<int> v7 = {1, 2, 3};
  for(vector<int>::const_iterator it = v7.cbegin(); it != v7.cend(); it++) {
    cout << *it << endl;
  }
  cout << "=====v7=====" << endl;

  vector<int> v8 = {1, 2, 3};
  v8.insert(v8.begin(), 4); // iterator 위치에 원소 추가
  v8.erase(v8.begin() +2); // iterator 위치에 원소 삭제
  for(const auto& element : v8) {
    cout << element << endl;
  }
  cout << "=====v8=====" << endl;

  vector<int> v9;
  vector<int> v10 = {1, 2, 3};
  v9.swap(v10); // container 내용 교체
  for(const auto& element : v9) {
    cout << element << endl;
  }
  cout << "=====v9,v10-=====" << endl;

  vector<int> v11;
  v11.push_back(1);
  v11.push_back(2);
  v11.push_back(3);
  v11.push_back(4);
  v11.push_back(5);
  cout << v11.size() << " " << v11.capacity() << endl; // size는 원소개수, capacity는 미리 동적할당한 개수
  cout << "=====v11-=====" << endl;
}