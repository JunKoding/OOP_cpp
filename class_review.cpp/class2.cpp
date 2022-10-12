#include <iostream>
class Person {
  private:
    int id;
    const char *name;
    int birthYear;
    
  public:
    void printinfo();

    Person();
    ~Person();
};
void Person::printinfo() {
  std::cout << "Call printinfo!!" << std::endl;
}
Person::Person() {
  std::cout << "constructor1" << std::endl;
  id = 0;
  name = "";
  birthYear = 2000;
}
Person::~Person() {
  std::cout << "destructor" << std::endl;
}
int main() {
  Person p;
  p.printinfo();
  
  return 0;
}