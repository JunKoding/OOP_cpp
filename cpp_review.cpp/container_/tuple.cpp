#include <iostream>
#include <string>
#include <tuple>


using namespace std;


int main() {
  tuple<int, string, double> t1;

  t1 = make_tuple(60222126, "Jun", 4.21);
  cout << get<0>(t1) << endl;

  auto t2 = make_tuple(60222117, "Seony", 4.5);
  cout << get<1>(t2) << endl;
}