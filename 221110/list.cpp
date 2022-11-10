#include <list>
#include <iostream>


using namespace std;


bool asc(const int& a, const int& b) {
  return a < b;
}


int main() {
  list<int> l = {5, 9, 1, 3, 3};
  l.sort(asc); // 오름차순

  for(const auto& element : l) {
    cout << element << endl;
  }

  cout << "==================================" << endl;


  list<int> l2 = {5, 9, 1, 3, 3};

  auto desc = [](const int& a, const int&b) {
    return a > b;
  };

  l2.sort(desc);// 내림차순

  for(const auto& element : l2) {
    cout << element << endl;
  }
  
  cout << "==================================" << endl;


  l.reverse(); // 뒤집기

  for(const auto& element : l) {
    cout << element << endl;
  }

  cout << "==================================" << endl;


  list<int> l3 = {3, 5, 9, 1, 3, 3, 3};
  l3.sort();
  l3.unique(); // 3을 다 지우려면 sort() 후 unique()

  for(const auto& element : l3) {
    cout << element << endl;
  }

  cout << "==================================" << endl;


}