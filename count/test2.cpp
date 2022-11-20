#include <algorithm>
#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {
  string s1, s2;
  vector<string> v;

  getline(cin, s1);
  getline(cin, s2);
  
  v.push_back(s1);
  v.push_back(s2);

  for(int i = 0; i<v.size(); i++) {
    cout << v[i] << endl;
  }

  sort(v.begin(), v.end());

  for(int i = 0; i<v.size(); i++) {
    cout << v[i] << endl;
  }
}