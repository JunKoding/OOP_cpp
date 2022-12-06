#include <iostream>
#include <list>


using namespace std;


int main() {
  list<int> l1 = {5, 9, 1, 3, 3};
  list<int> l2 = {4, 8, 2};

  l1.sort();
  l2.sort();
  l1.merge(l2);
  l1.unique();

  for(auto it = l1.begin(); it != l1.end(); it++) {
    cout << *it << " ";
  }

  cout << "\n";

  for(auto it = l2.begin(); it != l2.end(); it++) {
    cout << *it << " ";
  } // l2는 비어있음

  cout << "\n";
}