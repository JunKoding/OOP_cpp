#include <iostream>
#include <memory>
#include <string>


using namespace std;


struct MyClass {
  shared_ptr<MyClass> target;
};


int main() {
  /*
  string* p = new string("hello");

  shared_ptr<string> sp(p);

  cout << *sp << endl;
  cout << sp->length() << endl;

  sp.reset();
  cout << sp.get() << endl;
  */

 auto log = [](MyClass* arg) {
  cout << "deleted\n";
  delete arg;
 };

  shared_ptr<MyClass> obj1 {new MyClass, log};
  shared_ptr<MyClass> obj2 {new MyClass, log};

  obj1->target = obj2;
  obj2->target = obj1;

  obj1->target.reset();
}