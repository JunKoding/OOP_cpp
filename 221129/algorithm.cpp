#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
  string str;
  vector<string> words;

  while(cin >> str) {
    for(int i = 0; i<str.size(); i++) {
      str[i] = tolower(str[i]);
    }

    words.push_back(str);
  }

  for(vector<string>::const_iterator it = words.cbegin(); it != words.cend(); it++) {
    cout << *it << endl;
  }

  return 0;
}