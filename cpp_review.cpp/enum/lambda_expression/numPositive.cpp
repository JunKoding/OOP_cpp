#include <iostream>


using namespace std;


int main() {
  int arr[] = {1, 0, -1, -2, 2};
  int numPositive = 0; 

  auto lambda = [&numPositive](int arg) {
    if(arg > 0) {
      numPositive++;
    } else {
      // empty
    }
  };

  for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++) {
    lambda(arr[i]);
  }

  cout << numPositive << endl;

  return 0;
}