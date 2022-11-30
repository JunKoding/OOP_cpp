#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>


using namespace std;


int main() {
  int count = 0; // 단어 개수 0으로 초기화
  int cur_position = 0; // 현재 인덱스 위치는 0으로 초기화
  int position; // 위치
  int len = 0;
  string result;
  string s,word; // 문자열, 단어
  string separator = " ";
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

  for(int i = 0; i<v.size(); i++) {
    count ++; // 단어 개수 세기
  }

  cout << count << endl;
}