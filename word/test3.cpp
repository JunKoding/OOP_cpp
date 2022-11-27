#include <algorithm>
#include <iostream>
#include <map>
#include <string>


using namespace std;


int main() {
  string str;
  map<string, int> words_map;

  while(cin >> str) {
    for(int i = 0; i<str.size(); i++) {
      str[i] = tolower(str[i]);
    } 

    auto p = words_map.insert(make_pair(str, 0));

    if(p.second == false) {
      
    } else {
      // empty
    }
  }

  for(map<string,int>::const_iterator it = words_map.cbegin(); it != words_map.cend(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  for(map<string,int>::const_iterator rit = words_map.rbegin(); rit != words_map.rend(); rit++) {
    cout << rit->first << " " << rit->second << endl;
  }
}