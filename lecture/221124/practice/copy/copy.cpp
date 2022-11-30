#include <iostream>
#include <fstream>


using namespace std;


int main(int argc, char* argv[]) {
  string input;
  string output;

  cin >> input;
  cin >> output;

  ifstream ifs(input, ios::binary);
  char ptr[4096];
  ofstream ofs(output, ios::binary);

  while(ifs.read(ptr, sizeof(ptr))) {
    int n = ifs.gcount();
    ofs.write(ptr, n);
  }
}