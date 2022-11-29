#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int main() {
  vector<int> elements = {1, 2, 3, 4, 5, 6};

  auto check = [](int element) {
    return element % 2 == 0;
  };

  int n = count_if(elements.begin(), elements.end(), check);
  cout << n << endl;
}