#include <iostream>
#include <map>
#include <unordered_map>
#include <string>


using namespace std;


int main() {
  map<string,int> m1 = {
    {"C", 2},
    {"A", 1}
  };

  unordered_map<string,int> m2 = {
    {"C", 2},
    {"A", 1}
  };

  for(map<string,int>::const_iterator it = m1.cbegin(); it != m1.cend(); it++) {
    cout << it -> first << endl;
  }

  for(const map<string,int>::value_type& p : m1) {
    cout << p.first << endl;
  }

  for(const unordered_map<string,int>::value_type& p1 : m2) {
    cout << p1.first << endl;
  }
}