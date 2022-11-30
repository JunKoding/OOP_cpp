#include <iostream>
#include <vector>


namespace mjuoop {
  template<typename T>
  class Stack {
    public:
      std::vector<T> v;

      Stack();
      ~Stack();

      bool empty();
      int size();
      void swap(T value);
      void push(T const& value);
      void pop();
      T top();
  };

  template<typename T>
  Stack<T>::Stack() {};

  template<typename T>
  Stack<T>::~Stack() {};
  
  template<typename T>
  bool Stack<T>::empty() {
    return v.empty();
  }

  template<typename T>
  int Stack<T>::size() {
    return v.size();
  }

  template<typename T>
  void Stack<T>::swap(T value) {
    v.swap(value);
  }

  template<typename T>
  void Stack<T>::push(T const& value) {
    v.push_back(value);
  }

  template<typename T>
  void Stack<T>::pop() {
    v.pop_back();
  }

  template<typename T>
  T Stack<T>::top() {
    return v.back();
  }
}