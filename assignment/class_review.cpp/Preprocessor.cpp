#include <iostream>
#define PI 3.1415926535897
double circumference(double r) {
  return 2 * PI * r;
}
int main() {
  double r,circum;
  r = 5.6;

  circum = circumference(r);

  std::cout << circum << std::endl;

  return 0;
}