#include <iostream>
#include <list>


using namespace std;


int main() {
  list<int> l = {5, 9, 1, 3, 3};

  l.remove_if([](const int& e) {return e % 3 == 0;});

  for(auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
  }

  cout << "\n";
}