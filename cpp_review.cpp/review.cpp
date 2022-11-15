#include <string>
#include <iostream>


using namespace std;


int main() {
  string s1;
  s1 = "test";

  cout << s1.empty() << endl;
  cout << s1.size() << endl;
  cout << s1.length() << endl;
  cout << s1.find('t') << endl;
  
  for (const auto& element : s1) {
    cout << "[" << element << "]" << endl;
  }

  cout << s1.find('t') << endl;

  char buf1[1024];
  snprintf(buf1, sizeof(buf1), "%d", 100);
  cout << buf1 << endl;

  char buf2[1024];
  snprintf(buf2, sizeof(buf2), "%d", 1000);
  cout << buf2 << endl;

  string s = "100";
  int var;
  var = stoi(s);
  cout << var << endl;

  int i = 500;
  string s2;
  s2 = to_string(i);
  cout << s2 << endl;

  string s3;
  getline(cin, s3, ' ');
  cout << s3 << endl;
}