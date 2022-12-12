#include <fstream>
#include <iostream>


using namespace std;


int main() {
  ifstream ifs("output.txt");
  char c;
  ifs.get(c);
  cout << showbase << hex << (int) c;
}