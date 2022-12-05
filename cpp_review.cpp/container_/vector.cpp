#include <iostream>
#include <vector>


using namespace std;


int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6};

  v.insert(v.begin(), 4);
  v.erase(v.begin() + 2);

  for(auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }
  cout << "\n";
}