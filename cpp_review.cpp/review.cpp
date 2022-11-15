#include <iostream>
#include <vector>


using namespace std;


/*
int main() {
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3 = {1, 2, 3};
  vector<int> v4 = v3;
  
  for(const auto& element : v4) {
    cout << "[" << element << "]" << endl;
  }

  vector<int> v5;
  v5.push_back(1);
  v5.push_back(2);

  for(const int& e : v5) {
    cout << e << endl;
  }

  cout << v5.front() << endl;
  cout << v5.back() << endl;
  cout << v5.size() << endl;
  //cout << v5.at(2) << endl; // std::out_of_range 반환
}
*/


int main() {
  vector<int> v1 = {1, 2, 3};

  for(vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); it++) {
    cout << *it << endl;
  }

  vector<int> v2 = {1, 2, 3};

  for(auto it = v2.begin(); it != v2.end(); it++) {
    cout << *it << endl;
  }

  v2.insert(v2.begin(), 4);
  v2.erase(v2.cbegin() +2);

  for(vector<int>::const_iterator it = v2.cbegin(); it != v2.cend(); it++) {
    cout << *it << endl;
  }

  vector<int> v3;
  v3.push_back(1);
  v3.push_back(2);
  v3.push_back(3);
  v3.push_back(4);
  v3.push_back(5);

  cout << v3.size() << ' ' << v3.capacity() << endl;
}