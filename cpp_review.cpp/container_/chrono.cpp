#include <chrono>
#include <iostream>


using namespace std;


int main() {
  auto start = chrono::system_clock::now();

  cout << "hello world" << endl;

  auto end = chrono::system_clock::now();
  auto duration = end - start;

  cout << chrono::duration_cast<chrono::microseconds>(duration).count();
}