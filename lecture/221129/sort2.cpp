#include <algorithm>
#include <iostream>


using namespace std;


int main() {
  auto cmp = [](int a, int b) {
    if((a % 2 == 0) && (b % 2 == 1)) {
      return true;
    } else {
      // empty
    }
  };

  int l[] = {6, 5, 4, 3, 2, 1};
  sort(l + 0, l + 4, cmp);
  for(int e : l) {
    cout << e << endl;
  }

  return 0;
}