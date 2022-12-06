#include <iostream>
#include <list>


using namespace std;


int main() {
  list<int> l1 = {5, 9, 1, 3, 3};
  list<int> l2 = {4, 8, 2};

  list<int>::const_iterator it = l1.begin();
  l1.splice(it, l2); 
  // l1의 맨앞에 l2를 그냥 붙임

  for(auto it = l1.begin(); it != l1.end(); it++) {
    cout << *it << " ";
  }

  cout << "\n";

  for(auto it = l2.begin(); it != l2.end(); it++) {
    cout << *it << " ";
  }

  cout << "\n";
}