//#define NDEBUG


#include <cassert>
#include <iostream>


using namespace std;


// #ifdef NDEBUG
//   #define assert(cond)
// #else
//   #define assert(cond) if((cond) == false) abort()
// #endif


int main() {
  assert(1 == 2);


  return 0;
}