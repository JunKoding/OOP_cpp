#include <iostream>
class Person {
  private:
    int id;
    const char *name;
    int birthYear;

  public:
    void printinfo();
    Person();
    Person(int id, const char *name, int birthYear);
    ~Person();
};

void Person::printinfo() {
  std::cout << "Person printinfo is called" << std::endl;
}

Person::Person() {
  std::cout << "Constructor is called" << std::endl;
}

Person::Person(int id, const char *name, int birthYear) {
  std::cout << "Constructor2 is called" << std::endl;
  this -> id = id;
  this -> name = name;
  this -> birthYear = birthYear;
}

Person::~Person() {
  std::cout << "Destructor is called" << std::endl;
}

int main() {
  Person p1;

  return 0;
}