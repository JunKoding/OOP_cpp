#include <iostream>
#include <set>


using namespace std;


int main() {
  set<int> s = {
    1001,
    1002
  };

  s.insert(1003);
  s.insert(1004);

  for(const set<int>::value_type& p : s) {
    cout << p << endl;
  }

  set<int>::const_iterator it = s.cbegin();

  for(; it != s.cend(); it++) {
    cout << *it << endl;
  }
}