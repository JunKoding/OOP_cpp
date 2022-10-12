#include <iostream>


class Parent {
  public:
    Parent(int i) {
      std::cout << "Parent constructor" << std::endl;
    }
    ~Parent() {
      std::cout << "Parent destructor" << std::endl;
    }
};

class Member {
  public:
    Member() {
      std::cout << "Member constructor" << std::endl;
    }
    ~Member() {
      std::cout << "Member destructor" << std::endl;
    }
};


class Child: public Parent {
  public:
    Member m;
    int a;
    Child(): Parent(100), a(200)  {
      // 부모 클래스의 기본생성자 말구 다른 거 부르고 싶을 때는 자기의 멤버 변수 초기화 전에 먼저 해준다!! 따라서 Parent(100) , a(200) 순서!!
      std::cout << "Child constructor" << std::endl;
    }
    ~Child() {
      std::cout << "Child destructor" << std::endl;
    }
};


int main() {
  Child c;
  
  return 0;
}