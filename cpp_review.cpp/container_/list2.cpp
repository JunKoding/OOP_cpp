#include <iostream>
#include <list>


using namespace std;


bool desc(const int& a, const int& b) {
  return a > b;
}


int main() {
  list<int> l = {5, 1 ,-3, 2, -100, 99};

  l.sort(desc);

  for(auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
  }

  cout << "\n";
}