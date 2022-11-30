#include <iostream>
class Date {
  public:
    Date() {}
    explicit Date(double d) {} // 생성자를 explicit으로 하면 명시적으로 불러라!! Date c = Date(3); 이런식으로 불러야함
};
int main() {
  // Date c = 3; 
  // explicit으로 하면 묵시적으로 못함
  Date c = Date(3);
  Date d(4);
  
  return 0;
}