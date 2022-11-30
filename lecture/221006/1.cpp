#include <iostream>

class MyClass {
public:
	static int staticVar;
	static void f() { std::cout << "static func" << std::endl; }
};

int MyClass::staticVar;


int main() {
	MyClass::staticVar = 10;

	MyClass obj;
	std::cout << "static var" << obj.staticVar << std::endl;

	MyClass::f();
	obj.f();

  std::cout << sizeof(MyClass) << std::endl;
}