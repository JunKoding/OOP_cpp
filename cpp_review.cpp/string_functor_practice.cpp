/*string functor test*/
#include <algorithm>
#include <iostream>
#include <string>


using namespace std;


class String {
  public:
    string operator()(string str) {
      return str + "\nThis is C++!!";
    };
};  


int main() {
  string s;
  s = "Hello!!";

  String sc;
  cout << sc(s) << endl;
}