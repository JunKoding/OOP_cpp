#include <iostream>
#include <string>


using namespace std;


int main() {
  string s = "test";

  cout << s[1] << "\n";
  cout << s.at(1) << "\n";

  s[1] = 'a';
  s.at(2) = 'b';

  cout << s.substr(1,2) << "\n";
  cout << s.substr(1) << "\n";
}