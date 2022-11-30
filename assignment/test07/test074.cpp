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
 // Person characters[2] = {Person(1), Person(2)}; 
 
 Person* p1 = new Person;
 Person* p2 = new Person();
 Person* p3 = new Person(3);

  delete p1;
  
  return 0;
}