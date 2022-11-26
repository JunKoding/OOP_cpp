#include <algorithm>
#include <iostream>
#include <map>
#include <string>


using namespace std;


int main() {
  int num = 0;
  string s;
  map<string, int> m;

  while(cin >> s) {
    for(int i = 0; i<s.size(); i++) {
      s[i] = tolower(s[i]);
    }

    m[s] = num;
  }

  for(map<string, int>::const_iterator it = m.cbegin(); it != m.cend(); it++) {
    cout << it->first << " " << it->second << endl;
  }
}