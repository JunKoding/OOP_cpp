#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
  int elements1[] = {1, 2, 3, 4};
  vector<int> elements2 = {5, 6, 7};
  auto print = [](int element) {
    cout << "element: " << element << endl;
  };

  for_each(elements1 + 0, elements1 + 4, print); // array는 index로
  for_each(elements2.begin(), elements2.end(), print); // vecotr는 iterator로
}