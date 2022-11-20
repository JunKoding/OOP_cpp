#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
  string s; // 문자열
  vector<string> v; // 문자를 저장할 vector

  while(getline(cin, s)) {
    v.insert(v.cbegin(), s);
  }

  for(vector<string>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
    cout << *it << endl;
  }
}