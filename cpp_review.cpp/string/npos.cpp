#include <iostream>
#include <string>


using namespace std;


int main() {
  string s = "hello world";

  cout << s.find("ll") << endl;
  cout << s.find('w') << endl;
  cout << (s.find("hello", 5) == string::npos) << endl;
  cout << (s.find('w', 7) == string::npos) << endl;
  cout << (s.rfind("ll", 0) == string::npos) << endl;
  cout << (s.rfind("ll", 7) == string::npos) << endl;
}