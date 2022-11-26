#include <iostream>
#include <map>
#include <string>


using namespace std;


int main() {
  int i = 1;
  string s;
  map<string, int> m;

  while(cin >> s) {
    m[s] = i;
  }

  for(map<string, int>::const_iterator it = m.cbegin(); it != m.end(); it++) {
    cout << it->first << endl;
    cout << it->second << endl;
  }
}