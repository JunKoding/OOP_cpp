#include <deque>
#include <map>
#include <iostream>
#include <utility>


using namespace std;


int main() {
  /*
  deque<int> d1;
  deque<int> d2(10);
  deque<int> d3 = {1, 2, 3};
  deque<int> d4 = d3;

  for(const auto& e : d4) {
    cout << e << endl;
  }

  for(deque<int>::const_iterator it = d4.cbegin(); it != d4.cend(); it++) {
    cout << *it << endl;
  }
  */

 /*
 typedef pair<string, int> CityDistance;
 CityDistance p = {"Pusan", 325};

 cout << p.first << endl;
 cout << p.second << endl;
 */

  // map<string, int> m;
  // auto p = m.insert(make_pair("jun", 26));

  // if(p.second) {
  //   cout << "successful\n";
  // } else {
  //   cout << "failed\n";
  // }

  // p = m.emplace("seony", 21);

  // if(p.second) {
  //   cout << "successful\n";
  // } else {
  //   cout << "failed\n";
  // }

  // map<string, int> m = {
  //   {"Busan", 325},
  //   {"Incheon", 55}
  // };

  // map<string, int>::const_iterator it = m.find("Busan");
  
  // map<string, int> m = {
  //   {"Busan", 325},
  //   {"Incheon", 55}
  // };
  
  // map<string, int>::const_iterator it = m.find("Busan");

  // if(it != m.end()) {
  //   cout << it->first << endl;
  //   cout << it->second << endl;
  // }

  // it = m.find("Jeju");
  // if(it == m.end()) {
  //   cout << "not found\n";
  // }

  map<string,int> m = {
    {"a", 1},
    {"b", 2},
    {"c", 3}
  };

  for(map<string,int>::const_iterator it = m.cbegin(); it != m.cend(); it++) {
    cout << it->first << endl;
    cout << it->second << endl;
  }

  for(map<string,int>::value_type& p : m) {
    cout << p.first << endl;
    cout << p.second << endl;
  }

  
}