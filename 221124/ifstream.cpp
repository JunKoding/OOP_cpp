#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main() {
  ifstream ifs("output.txt");

  string first, second;
  ifs >> first >> second;
  cout << first << endl << second << endl;
}