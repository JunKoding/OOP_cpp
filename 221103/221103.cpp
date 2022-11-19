#include <string>
#include <iostream>


using namespace std;


// 1. 표준 라이브러리 string

/*
int main() {
  string s1;
  cout << "[" << s1 << "]" << endl;

  string s2 = "s2";
  cout << "[" << s2 << "]" << endl;

  string s3("s3");
  cout << "[" << s3 << "]" << endl;

  s2 = s3;
  cout << "[" << s2 << "]" << endl;
}
*/


/*
int main() {
  string s1;
  cout << s1.empty() << "" << endl;
  cout << s1.size() << "" << endl;
  cout << s1.length() << "" << endl;

  cout << "##################" << endl;

  string s2 = "s2";
  cout << s2.empty() << "" << endl;
  cout << s2.size() << "" << endl;
  cout << s2.length() << "" << endl;
}
*/


/*
// 연산
int main() {
  string s = "test";
  cout << s + "1" << "" << endl;
  cout << s + string("2") << "" << endl;
  cout << s + '3' << "" << endl;
}
*/

/*
// 비교
int main() {
  string s = "test";
  cout << (s == "test") << "\n";
  cout << (s == "TEST") << "\n";
  cout << ("test" == s) << "\n";
  cout << (s == string("test")) << "\n";
}
*/

/*
// 추가
int main() {
  string s("ho");
  s.insert(1, 1, 'e');
  s.insert(2, "ll");
  s.push_back(' ');
  s.append("world");
  s.push_back(' ');
  s.append(string("mju"));
  s.append(2, '!');
  s += '!';
  s += "!!";

  cout << s << endl;
}
*/

// 제거
/*
int main() {
  string s = "hello world";
  s.pop_back();
  cout << s << "\n";

  s.erase(8, 2);
  cout << s << "\n";

  s.erase(5);
  cout << s << "\n";

  s.clear();
  cout << s.empty() << "\n";
}
*/

// 바꾸기
/*
int main() {
  string s = "test";
  string t = "TEST";

  s.swap(t);
  cout << s << "\n";

  s.replace(1, 2, "12345");
  cout << s << "\n";
}
*/

// 비교
/*
int main() {
  string s = "test";
  cout << s.compare("abc") << "\n";
  cout << s.compare("test") << "\n";
  cout << s.compare("xyz") << "\n";
}
*/

// 글자 반환
/*
int main() {
  string s = "test";

  cout << s[1] << "\n";
  cout << s.at(1) << "\n";
  s[1] = 'a';
  s.at(2) = 'b';
  cout << s.substr(1, 2) << "\n";
  cout << s.substr(1) << "\n";
}
*/

// exception
/*
int main() {
  string s = "test";

  try {
    //cout << s[5];
    cout << s.at(5);
  }
  catch(...) {
    cout << "catch\n";
  }
}
*/

// for 범위기반
/*
int main() {
  string s = "test";

  for(const char& c : s) {
    cout << "[" << c << "]\n";
  }
}
*/

// find
/*
int main() {
  string s = "hello world";

  cout << s.find("ll") << "\n";
  cout << s.find('w') << "\n";
  cout << (s.find("hello", 5) == string::npos) << "\n";
  cout << (s.find('w', 7) == string::npos) << "\n";
}
*/


// rfind
/*
int main() {
  string s = "hello world";

  cout << (s.rfind("11", 0) == string::npos) << "\n";
  cout << (s.rfind("11", 7) == string::npos) << "\n";
}
*/


// stoi, to_string
/*
int main() {
  string s("10");

  int i = stoi(s);
  double d = stod(s);
  cout << i << "\n";
  cout << d << "\n";

  string s2 = to_string(i);
  string s3 = to_string(d);
  cout << s2 << "\n";
  cout << s3 << "\n";
}
*/


// 읽기
/**/
int main() {
  string s;

/*
  cin >> s;
  cout << "[" << s << "]\n";
  // hellow world 입력시 [hello]
*/

/*
  getline(cin, s);
  cout << "[" << s << "]\n";
  // hellow world 입력시 [hello world]
*/

  getline(cin, s, ' ');
  cout << "[" << s << "]\n";
  // hellow 엔터 world mju 입력시 [hello
  // world]
}