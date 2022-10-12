#include <iostream>
#include <string.h>
#define _CRT_NONSTDC_NO_DEPRECATE // 전처리기 오류 방지

class Movie {
  private:
    const char* name; // 제목
    const char* date; // 개봉일
    int* avg; // 평점
    int size; // 평점 배열 크기

  public:
    Movie(const char* name, const char* date); // 생성자
    ~Movie(); // 소멸자

    void addRate(int rate); // 평점을 추가하는 메소드
    void print(); // 영화 정보를 출력하는 메소드
};

Movie::Movie(const char* name, const char* date) {
  std::cout << "Constructor called" << std::endl;
  this -> name = name;
  this -> date = date;
  avg = NULL;
  size = 0;

  name = strdup(name); // 동적 할당 후 스트링 카피
  date = strdup(name);
}

Movie::~Movie() {
  void free(void* name); // 메모리 해제
  void free(void* date);
  free(avg);
   
  std::cout << "Destructor called" << std::endl;
}

void Movie::addRate(int rate) {
  if((1<=rate) && (rate<=5)) {
    if(avg == NULL) {
      avg = (int*)malloc(sizeof(int));
      size = 1;
      avg[size-1] = rate;
    } else {
      size = size + 1;
      avg = (int*)realloc(avg, sizeof(int)*size);
      avg[size-1] = rate;
    }
  } else {
    std::cerr << "Invalid rate" << std::endl;
  }
}

void Movie::print() {
  std::cout << name << std::endl;
  std::cout << date << std::endl;
  int sum; // 평점 총합
  sum = 0;
  for(int i = 0; i<size; i++) {
    sum += avg[i];
  }
  std::cout << sum/size << std::endl;
}

int main() {
  Movie topGun("Top Gun", "2022-06-22"); 

  topGun.addRate(5);
  topGun.addRate(6); // Invalud rate 출력
  topGun.addRate(1);

  topGun.print();
  // Top Gun
  // 2022-06-22
  // 3 

  return 0;
}