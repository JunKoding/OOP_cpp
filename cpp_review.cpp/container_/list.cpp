#include <iostream>
#include <list>


using namespace std;


int main() {
  list<int> l = {5, 3, 6, 1, 2, -1, 4};

  l.sort();

  for(auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
  }

  cout << "\n";

  l.reverse();

  for(auto it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
  }

  cout << "\n";
}