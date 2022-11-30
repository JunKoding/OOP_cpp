#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
  vector<int> element = {1, 2, 3, 4, 5, 6};
  auto check = [](int arg) {
    return arg % 2 == 0;
    // 짝수를 선택함
  };

  int num = count_if(element.begin(), element.end(), check);
  cout << "짝수: " << num << endl;
}