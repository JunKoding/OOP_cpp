#include <iostream>
#include <memory>
#include <string>


using namespace std;


int main() {
  string* p = new string("Hello");

  shared_ptr<string> sp(p);
  
  cout << *sp << endl;
  cout << sp->length() << endl;

  sp.reset();
  cout << sp.get() << endl;
}