#include <iostream>
#include <vector>


using namespace std;


int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

  for(vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++ ){
    cout << *it << " ";
  }
  cout << "\n";

  for(vector<int>::const_reverse_iterator rit = v.rbegin(); rit != v.rend(); rit++) {
    cout << *rit << " ";
  }
  cout << "\n";
}