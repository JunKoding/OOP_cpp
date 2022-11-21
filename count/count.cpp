#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>


using namespace std;


int main() {
  int count = 0; // 단어 개수 0으로 초기화
  string s,word; // 문자열, 단어
  vector<string> v; // 단어를 저장할 벡터
  
  while(getline(cin, s)) {
   for(int i = 0; i<s.size(); i++) {
      s[i] = tolower(s[i]);
      // 모든 문자를 소문자로 통일
    }

    istringstream str(s);

    while(str>>word) {
      v.push_back(word);
      // 벡터에 단어 단위로 저장.
    }
  }

  // cout << "===========소문자로============" << endl;

  // for(int i = 0; i<v.size(); i++) {
  //   cout << v[i] << endl;
  // }

  // cout << "==========출력=============" << endl;
  
  sort(v.begin(), v.end()); // 알파벳순으로 정렬

  // for(int i = 0; i<v.size(); i++) {
  //   cout << v[i] << endl;
  // }

  // cout << "==========정렬===========" << endl;

  v.erase(unique(v.begin(), v.end()), v.end()); // 중복 제거

  // for(int i = 0; i<v.size(); i++) {
  //   cout << v[i] << endl;
  // }
  
  //cout << "==========중복제거=============" << endl;

  for(const auto& e : v) {
    count ++;
  }

  cout << count << endl;
}