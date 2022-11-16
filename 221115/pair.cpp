#include <iostream>
#include <utility>


using namespace std;


int main() {
  typedef pair<string, int> p = {"부산", 325};

  cout << p.first << endl;
  cout << p.second << endl;
}