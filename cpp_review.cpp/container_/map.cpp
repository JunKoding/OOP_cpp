#include <iostream>
#include <map>
#include <string>


using namespace std;


int main() {
  map<string,int> m = {
    {"Jun", 26},
    {"Seony", 21}
  };

  auto p = m.insert(make_pair("A", 1));

  cout << m["A"] << endl;

  auto p1 = m.emplace("B", 2);

  cout << m["B"] << endl;

  cout << m["C"] << endl;
}