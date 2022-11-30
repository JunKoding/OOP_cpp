#include <iostream>
#include <list>


namespace mjuoop {
  template<typename T>
  class Queue {
    public:
      std::list<T> l;

      Queue();
      ~Queue();

      bool empty();
      int size();
      void swap(T value);
      void push(T const& value);
      void pop();
      T front();
      void back();
  };

  template<typename T>
  Queue<T>::Queue() {};

  template<typename T>
  Queue<T>::~Queue() {};
  
  template<typename T>
  bool Queue<T>::empty() {
    return l.empty();
  }

  template<typename T>
  int Queue<T>::size() {
    return l.size();
  }

  template<typename T>
  void Queue<T>::swap(T value) {
    l.swap(value);
  }

  template<typename T>
  void Queue<T>::push(T const& value) {
    l.push_back(value);
  }

  template<typename T>
  void Queue<T>::pop() {
    l.pop_front();
  }

  template<typename T>
  T Queue<T>::front() {
    return l.front();
  }

  template<typename T>
  void Queue<T>::back() {
    l.back();
  }
}


using namespace mjuoop;
using namespace std;


int main() {
	Queue<int> q;

	cout << q.empty() << endl;

	q.push(200);
	q.push(100);
	cout << q.size() << endl;

	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
}