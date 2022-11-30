#include <iostream>
class Member {
  public:
    Member () {
      std::cout << "Member::Member()\n";
    }
    Member(int a) {
      std::cout << "Member::Member(int)\n";
    }
};

class Container {
  public:
    Member member; // 이건 기본 생성자 부르니까 : member(int arg) 

    Container(): member(Member(3)) {
      //member = Member(3); // 이거는 생성자 2개 불린다. 이거는 멤버가 아닌 다른 변수를 초기화할 때 쓴다. 멤버 생성자를 초기화할 때는 member(Member(3)) 
    }
};
int main() {
  Container c;
  // member부터 초기화
  return 0;
} // 여기 벗어나면 소멸되면서 container의 소멸자 불린 후 member 소멸자 불림