#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
  int l[] = {1, 2, 3};
  vector<int> v = {4, 5, 6};

  auto print = [](int arg) {
    cout << arg << " ";
  };

  for_each(l + 0, l + 3, print);
  for_each(v.begin(), v.end(), print);
}