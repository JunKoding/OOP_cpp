#include <iostream>
#include <map>
#include <string>


using namespace std;


int main() {
  map<string,int> m = {
    {"Jun", 26},
    {"Seony", 21}
  };

  map<string,int>::const_iterator it = m.find("Jun");

  cout << it->first << endl;
  cout << it->second << endl;
}