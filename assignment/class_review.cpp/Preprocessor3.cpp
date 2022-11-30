#include <iostream>
#define DEBUG
#ifdef DEBUG
#define PRINT(x) printf(x)
#else
#define PRINT(x)
#endif
int main() {
  PRINT("HELLO!!\n");

  return 0;
}