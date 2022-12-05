#include <iostream>
#include <string>


using namespace std;


int main() {
  string s = "test";
  string t = "TEST";

  s.swap(t);
  cout << s << endl;

  s.replace(1,2,"12345");
  cout << s << endl;
}