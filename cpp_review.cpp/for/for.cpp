#include <iostream>


using namespace std;


int main() {
  char str[] = "hello";
  
  /*
  for(int i = 0; i<sizeof(str)/sizeof(str[0]); i++) {
    str[i] = str[i] - 'a' + 'A';
  }
  cout << str << endl;
  */

  for(char& ref : str) {
    if(ref == '\0') {
      break;
    } else {
      ref = ref - 'a' + 'A';
    }
  } // 대문자로 바꾸기

  cout << str << endl;
}