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


  list<int> l4 = {5, 9, 1, 3, 3};
  list<int> l5 = {4, 8, 2};

  l4.sort();
  l5.sort();
  l4.merge(l5); // merge()는 sort()를 하고 해야한다.

  cout << "[l4]" << endl;
  for(const auto& element : l4) {
    cout << element << endl;
  }
  cout << "\n";

  cout << "[l5]" << endl;
  for(const auto& element : l5) {
    cout << element << endl;
  }

  cout << "==================================" << endl;

  
  list<int> l6 = {5, 9, 1, 3, 3};
  list<int> l7 = {4, 8, 2};

  list<int>::const_iterator it = l6.begin(); // it를 iterator로 받는다
  ++it;
  
  l6.splice(it, l7); // 9뒤에 l7을 붙인다.

  cout << "[l6]" << endl;
  for(const auto& element : l6) {
    cout << element << endl;
  }
  cout << "\n";

  cout << "[l7]" << endl;
  for(const auto& element : l7) {
    cout << element << endl;
  }
  
  cout << "==================================" << endl;


  list<int> l8 = {5, 9, 1, 3, 3};
  list<int> l9 = {5, 9, 1, 3, 3};

  l8.remove(3); 

  cout << "[l8]" << endl;
  for(const auto& element : l8) {
    cout << element << endl;
  }
  cout << "\n";

  l9.remove_if([] (const int& element) {
    return element % 3 == 0;
  });

  for(const auto& e : l9) {
    cout << e << endl;
  }

  cout << "==================================" << endl;

}