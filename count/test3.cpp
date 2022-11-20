#include <iostream>
#include <string>


using namespace std;


int main() {
  string s;
  int count = 0;

  getline(cin, s);

  if(s[0] != ' ') {
    count = 1;

    for(int i = 0; i<s.size(); i++) {
      if(s[i] == ' ') {
        count ++;
      }
    }
  } else {
    cout << "첫 단어가 빈칸입니다. 다시 입력하세요.";
    
    return 0;
  }

  cout << "단어 개수: " << count << endl;
}