#define NDEBUG


#include <iostream>


using namespace std;


#ifdef NDEBUG
  #define VALUE 100
#else 
  #define VALUE 200
#endif


int main() {
  cout << "VALUE: " << VALUE << endl;
  
  return 0;
}