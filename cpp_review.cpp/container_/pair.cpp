#include <iostream>
#include <utility>


using namespace std;


int main() {
  pair<string, int> p = { "준규", 26};

  cout << p.first << endl;
  cout << p.second << endl;

  auto p2 = make_pair("서현", 21);
  
  cout << p2.first << endl;
  cout << p2.second << endl;

}