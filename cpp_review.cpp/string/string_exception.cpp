#include <iostream>
#include <string>


using namespace std;


int main() {
  string s = "test";

  try {
    throw s[5];
  }
  
  catch(...) {
    cout << "catch\n";
  }
}