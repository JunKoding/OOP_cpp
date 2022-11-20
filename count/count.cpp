/*중복된 단어 개수 못거른 버전*/
#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
  string s; // 문자열
  vector<string> v; // 문자를 저장할 vector
  int count = 0; // 단어 개수

  while(getline(cin, s)) {
    for(int i = 0; i<s.size(); i++) {
      if(s[i] == ' ') {
        // 빈 칸이 있으면 단어 개수 +1
        count ++;
      }
    }

    v.push_back(s);
  }

  for(int i = 0; i<v.size(); i++) {
    // vector에 저장한 단어 개수 세기
    count ++;
  }

  cout << "\n" << endl;

  cout << count << endl;
}