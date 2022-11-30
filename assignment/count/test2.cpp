#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
  string s;
  vector<string> v;
  int count = 0;

  while(getline(cin, s)) {
    for(int i = 0; i<s.size(); i++) {
      if(s[i] == ' ') {
        count ++;
      }
    }

    v.push_back(s);
  }

  for(int i = 0; i<v.size(); i++) {
    count ++;
  }

  cout << "\n" << endl;

  cout << count << endl;
}