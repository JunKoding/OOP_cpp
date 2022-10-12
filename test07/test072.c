#include <stdio.h>
int main() {
  const int NUM_STUDENTS = 10;
  const int NUM_TEACHERS = 5;
  int current = 20;

  const int *p = &NUM_STUDENTS;
  // *p = 30;
  // 읽기만 가능인데 쓰기 불가능

  p = &NUM_TEACHERS;
  p = &current;
  //다른 주소로 넣는 것은 가능

  int *p2 = &NUM_STUDENTS;
  // NUM_STUDENTS는 const라서 읽기만 가능한데 int는 읽고 쓰기 둘 다

  return 0;
}