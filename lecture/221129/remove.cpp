#include <algorithm>
#include <iostream>


using namespace std;


int main() {
  int l[] = {1,2,3,4};

  int* NewEnd = remove(l +0, l +4, 3);

  cout << (NewEnd - l) << endl;

  for(int e : l) {
    cout << e << endl;
  }
}