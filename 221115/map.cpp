#include <iostream>
#include <map>


using namespace std;


int main() {
  /*
  map<string, int> m1;
  map<string, int> m2 = {
    {"부산", 325}, 
    {"인천", 55}
  };
  map<string, int> m3 = m2;

  map<string, int> m;


  auto p = m.insert(make_pair("부산", 325));
  if(p.second) {
    cout << "successful\n";
  }

  p = m.insert(make_pair("부산", 325));
  if(p.second == false) {
    cout << "failed\n";
  }
  */

/*
 map<string, int> m;
 auto p = m.insert({"부산", 325});
 if(p.second == true) {
  cout << "successful\n";
 }
 */

/*
  map<string, int> m = {
    {"부산", 325},
    {"인천", 55}
  };

  m["제주"] = 455;
  cout << m.size();
*/

/*
  map<string, int> m;
  auto p = m.emplace("부산", 325);
  if(p.second == true) {
    cout << "successful\n";
  }

  p = m.emplace("부산", 325);
  if(p.second == false) {
      cout << "failed\n";
  }
*/

/*
  vector<int> v = {1, 2, 3};
  cout << v[3] << endl;

  map<string, int> m = {
    {"부산", 325},
    {"인천", 55}
  };

  cout << m.at("부산") << endl;
  cout << m["인천"] << endl;
  cout << m["제주"] << endl;
  cout << sizeof(m) << endl;
*/

/*
  map<string, int> m = {
    {"부산", 325},
    {"인천", 55}
  };

  map<string, int>::const_iterator it = m.find("부산");

  if(it != m.end()) {
    cout << it->first << endl;
    cout << it->second << endl;
  }

  it = m.find("제주");

  if(it == m.end()) {
    cout << "not found\n";
  }
*/

/*
  map<string, int> m = {
    {"부산", 325},
    {"인천", 55}
  };

  m.erase("부산");
  cout << m.size() << endl;

  m.erase("제주");
  cout << m.size() << endl;

  auto it = m.find("인천");
  m.erase(it);
  cout << m.size() << endl;
*/

/*
  map<string, int> m = {
    {"c", 2},
    {"a", 1}
  };

  for(auto it = m.begin(); it != m.end(); it++) {
    cout << it->first << endl;
  }

  for(map<string, int>::const_iterator it = m.cbegin(); it != m.cend(); it++) {
    cout << it->first << endl;
  }

  for(const map<string, int>::value_type& p : m) {
    cout << p.first << endl;
  }
*/


	map<string, int> m = {
		{"c", 2},
		{"a", 1},
	};

	auto it = m.lower_bound("a");
	cout << it->first << endl; // a, c

	it = m.upper_bound("a");
	cout << it->first << endl; // c

	auto p = m.equal_range("a");
	auto it1 = p.first; 
	auto it2 = p.second; 
	cout << it1->first << " " << it2->first << endl; // a, c

}