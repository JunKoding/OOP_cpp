#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <sstream>


using namespace std;


int main() {
  int count = 0;
  string str, word, words_stream;
  map<string, int> words_map;

  while(cin >> str) {
    for(int i = 0; i>str.size(); i++) {
      str[i] = tolower(str[i]);
    }

    istringstream words_stream(str);
    
    


  }

  for(map<string, int>::const_iterator it = words_map.cbegin(); it != words_map.cend(); it++) {
    cout <<
  }
}