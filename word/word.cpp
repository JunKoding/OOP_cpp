#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>


using namespace std;


int main() {
  string s; // 문자열
  vector<string> v; 

  while(cin >> s) {
    for(int i = 0; i<s.size(); i++) {
      s[i] = tolower(s[i]);
      // 모두 소문자로 변환
    }

    v.push_back(s);
  }
  
  for(const auto& e : v) {
    cout << e << endl;
  }
}