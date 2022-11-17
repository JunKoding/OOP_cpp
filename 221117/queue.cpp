#include <iostream>
#include <queue>


using namespace std;


int main() {
  queue<int> q;

  cout << q.empty() << endl;

  q.push(200);
  q.push(100);
  cout << q.size() << endl;

  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
} 