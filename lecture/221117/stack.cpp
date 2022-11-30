#include <iostream>
#include <stack>


using namespace std;


int main() {
  stack<int> s;

  cout << s.empty() << endl;

  s.push(200);
  s.push(100);
  cout << s.size() << endl;

  int top = s.top();
  cout << top << endl;

  s.pop();
  cout << s.size() << endl;
}