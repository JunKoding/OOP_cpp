#include <iostream>
#include <unordered_set>


using namespace std;


int main() {
  unordered_set<int/*id*/> students = {
    1001,
    1002,

  };

  students.insert(1003);
  students.insert(1002);
  cout << students.size() << endl;

  students.erase(1002);
  cout << students.count(1002) << endl;
  //unordered_set<int>::const_iterator it = students.find(1002);
  auto it = students.find(1002);
  if(it == students.end()) {
    cout << "not found\n";
  }

  for(const auto& id : students) {
    cout << id << endl;
  }
}