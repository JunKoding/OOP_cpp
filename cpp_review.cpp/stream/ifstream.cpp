#include <fstream>
#include <iostream>


using namespace std;


int main () {
  ifstream ifs("output.txt");

  string first;
  ifs >> first;
  cout << first << endl;
}