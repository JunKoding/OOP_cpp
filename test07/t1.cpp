#include <iostream>
class Person {
  public:
    Person() {
     std::cout << "constructor" << std::endl;
   }

   Person(int id) {
    std::cout << "constructor2" << std::endl;
   }

   ~Person() {
    std::cout << "destructor" << std::endl;
   }
};
int main() {
  Person* array = new Person[10];
  delete array;

  return 0;
}