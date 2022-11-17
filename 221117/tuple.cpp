#include <iostream>
#include <tuple>


using namespace std;


int main() {
  tuple<int, string, double> t1 = make_tuple(60222126, "Jun", 100.0);
  cout << get<0>(t1) << endl;

  auto t2 = make_tuple(60220001, "뽀로로", 70.1);
  cout << get<1>(t2) << endl;
}