#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
  int l[] = {4, 3, 2, 1};

  sort(l + 0, l + 4);
  for(int e : l) {
    cout << e << endl;
  }

  vector<int> l2 = {4, 3, 2, 1};
  sort(l2.begin(), l2.end());
}