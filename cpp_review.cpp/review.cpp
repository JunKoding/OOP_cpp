#include <iostream>
#include <list>


using namespace std;

/*
bool desc(const int& a, const int& b) {
  return a > b;
}


bool asc(const int& a, const int& b) {
  return a < b;
}


int main() {
  list<int> l = {5, 9, 1, 3, 3 };
  l.sort(desc);

  for(const auto& e : l) {
    cout << e << endl;
  }

  cout << "\n";

  l.sort(asc);
  for(const auto& e : l) {
    cout << e << endl;
  }

  cout << "\n";

  l.reverse();
  for(const auto& e : l) {
    cout << e << endl;
  }
}
*/

/*
int main() {
  list<int> l = {5, 9, 1, 3, 3};

  l.unique();
  for(const auto& e : l) {
    cout << e << endl;
  } // 5,9,1,3

  list<int> l1 = {5, 9, 1, 3, 3};

  auto desc = [](const int& a, const int& b) {
    return a < b;
  };

  l1.sort(desc);
  for(const auto& e : l1) {
    cout << e << endl;
  }
}
*/

/*
int main() {
  list<int> l = {5, 3, 9, 1, 3, 3};

  //l.sort();
  l.unique();
  for(const int& e : l) {
    cout << e << endl;
  }
}
*/

int main() {
  list<int> l1 = {5, 9, 1, 3, 3};
  list<int> l2 = {4, 8, 2};

  // l1.sort();
  // l2.sort();
  // l1.merge(l2);
  // for(const auto& e : l1) {
  //   cout << e << endl;
  // }

  list<int>::const_iterator it = l1.cend();
  l1.splice(it, l2);
  for(const auto& e : l1) {
    cout << e << endl;
  }


}