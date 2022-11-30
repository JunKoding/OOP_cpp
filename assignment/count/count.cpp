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

    s.erase(remove_if(s.begin(), s.end(), ::ispunct), s.end()); // 구두점 제거   

    istringstream str(s); // 문자열을 공백을 이용해 나누기

    while(str>>word) {
      v.push_back(word);
      // 벡터에 단어 단위로 저장.
    }
  }
  
  sort(v.begin(), v.end()); // 알파벳순으로 정렬

  v.erase(unique(v.begin(), v.end()), v.end()); // 중복 제거

  for(const auto& e : v) {
    count ++; // 단어 개수 세기
  }

  cout << count << endl; // 개수 출력
}