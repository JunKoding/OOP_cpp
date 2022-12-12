#include <iostream>
#include <stack>


using namespace std;


int main() {
  stack<int> s;

  s.push(200);
  s.push(100);

  cout << s.size() << endl;
  cout << s.top() << endl;

  s.pop();

  cout << s.size() << endl;
  cout << s.top() << endl;
}