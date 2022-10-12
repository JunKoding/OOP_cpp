#include <iostream>
#define PI 3.1415926535897
#define CIRCUM(r) 2 * PI * r 
int main() {
  double r;
  r = 89.193;

  std::cout << CIRCUM(r) << std::endl;
  
  return 0;
}