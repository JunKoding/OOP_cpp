#include <iostream>


using namespace std;


int main() {
  char str[] = "hello";

  for(char& e : str) {
    e = e - 'a' + 'A';
  }

 cout << str;
}