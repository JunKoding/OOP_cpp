#include <iostream>


using namespace std;


int main() {
  string str = "Hello~";
  string (*sptr)(string); // string type function pointer
  sptr = [](string s) {
    return s + " This is C++ world!!";
  }; // lambda function

  int (*fptr)(int); // int type function pointer
  fptr = [](int arg) {
    return arg * 2;
  }; // lambda function

  cout << fptr(100) << "\n" << sptr(str) << endl;
}