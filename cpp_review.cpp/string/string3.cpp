#include <iostream>
#include <string>


using namespace std;


int main() {
  string s = "Hello!! This is C++ world~";

  for(const auto& p : s) {
    cout << p;
  }
}