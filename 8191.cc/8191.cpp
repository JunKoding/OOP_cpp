#include <iostream>
int main() {
  int width;
  int height;

  std::cout << "Enter Width:";
  std::cin >> width;
  std::cout << std::endl;
  
  std::cout << "Enter Height";
  std::cin >> height;
  std::cout << std::endl;

  if(width >= 0 && height >= 0) {
    std::cout << "Area is ";
    std::cout << width * height << std::endl;
  } else {
    std::cout << "Invalid input" << std::endl;
  }

  return 0;
}