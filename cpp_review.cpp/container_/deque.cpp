#include <deque>
#include <iostream>


using namespace std;


int main() {
  deque<int> d = {1, 2, 3};

  d.push_back(4);
  d.insert(d.begin() + 2, 5);
  d.pop_front();
  d.push_front(6);

  for(const auto& e : d) {
    cout << e << " ";
  }
}