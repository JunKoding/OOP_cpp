#pragma warning(disable: 4996)
// strdup error 방지

#include <chrono>
#include <ctime>
#include <iostream>


class Animal {
private:
  const char* name;
public:
  Animal(const char* name): name((strdup(name))) {
  }

  virtual ~Animal() {
    free((void*) name);
    std::cout << "Animal destructor" << std::endl;
  }

	const char* getName(); // getName()을 Animal로 옮긴다
	virtual bool isHungry(int currentHour) = 0;
	virtual void getFood() = 0;
	// 순수 가상함수들이므로 추상 클래스
};

const char *Animal::getName() {
  return name;
}


class Dog : public Animal {
	// 이제 인터페이스로 쓸 수 있음

public:
	Dog(const char* name) : Animal(name) {
		// 비어있는 구현
	}

	~Dog() {
    std::cout << "Dog destructor" << std::endl;
	}

	bool isHungry(int currentHour) override {
		// 언제나 배가 고프다
		return true;
		// 가상함수를 재정의
	}

	void getFood() override {
		// 짖어서 닝겐에게 요청한다.
		std::cout << getName() << ": 왈왈왈!" << std::endl;
		// 가상함수를 재정의
	}
};


class Human : public Animal {

public:
	Human(const char* name) : Animal(name) {
		// 비어있는 구현
		// 위와 동일
	}

	~Human() {
	}

	bool isHungry(int currentHour) override {
		// 밥 때에만 배가 고프다.
		if (currentHour == 9 || currentHour == 12 || currentHour == 18) {
			return true;
		}
		else {
			return false;
		}
	}

	void getFood() override {
		// 배달을 시킨다.
		std::cout << getName() << ": 배달의 민족 주문~" << std::endl;
	}
};


// 아래 함수는 실제 구현되는 클래스에 대한 정보는 전혀 없이
// 오직 Animal 이라는 클래스의 인터페이스만으로 구현되었다.
void checkIfHungryAndGetFood(Animal* animal, int currentHour) {
	// 추상클래스 인터페이스를 받음
	if (animal->isHungry(currentHour)) {
		animal->getFood();
	}
	else {
		std::cout << animal->getName() << ": " << currentHour << "시니까 아직 배가 고프지 않아" << std::endl;
	}
}


int main() {
	// 누렁이
	Animal* yellow = new Dog("Yellow");
	// 업캐스팅해서 애니멀에 넣음
	// 만들어지는 것은 Dog인데 프로그래밍은 animal을 갖고 함
	checkIfHungryAndGetFood(yellow, 9);
	checkIfHungryAndGetFood(yellow, 10);

	// 문대경
	Animal* dkmoon = new Human("DK");
	// 위와 동일
	checkIfHungryAndGetFood(dkmoon, 9);
	checkIfHungryAndGetFood(dkmoon, 10);
}