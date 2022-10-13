#include <iostream>


/*
namespace mju {
  class Student {
    public:
      virtual int getId() = 0;
      virtual ~Student() {}
  };
}


namespace mju {
  namespace impl {
    class Student: public mju::Student {
      private:
        int id;
        
       public:
        Student(int id): id(id) {}
        int getId() override; 
    };
  }
}


int mju::impl::Student::getId() {
  return id;
}


int main() {
  std::cout << "hello world" << std::endl;
  mju::impl::Student dkmoon(100);

  using namespace std;
  cout << dkmoon.getId() << endl;

  return 0;
}
*/

/*
class MyClass {
  public:
    enum Color {RED, BLUE};
    typedef int StudentIdType;

    class InternalClass {
    };
};


int main() {
  MyClass::Color c = MyClass::Color::RED;
  MyClass::StudentIdType studnetId;
  MyClass::InternalClass obj;


  return 0;
}
*/

/*
using namespace std;


void f(int) {
  cout << "int version" << endl;
}


void f(char) {
  cout << "char version" << endl;
}


int main() {
  f(10);
  f('a');
}
*/

/*
class MyClass {
  public:
    void f() const {};
};


int main() {
  MyClass obj1;
  obj1.f();

  const MyClass obj2;
  obj2.f();
}
*/


/*
// const, non-const
using namespace std;


class MyClass {
  public:
    void f() const {
      cout << "const version" << endl;
    }
    void f() {
      cout << "non-const version" << endl;
    }
};


int main() {
  MyClass obj1;
  obj1.f();

  const MyClass obj2;
  obj2.f();
}
*/


// const_cast
class MyClass {
  public:
    void f() {};
};


int main() {
  MyClass obj1;
  obj1.f();

  const MyClass obj2;
  MyClass& ref2 = const_cast<MyClass&>(obj2);
  ref2.f();
}