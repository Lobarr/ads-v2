#include "./Stack.h"

template <typename T>
Stack<T>::Stack() {}

template <typename T>
void Stack<T>::push(const T& input) {
  stack.addFront(input);
}

template <typename T>
void Stack<T>::pop() {
  stack.removeFront();
}

template <typename T>
const T* Stack<T>::top() const {
  if (stack.empty()) throw "Stack Empty";
  return stack.getHead()->data;
}

template <typename T>
const bool Stack<T>::empty() const {
  return stack.empty();
}

template <typename T>
const unsigned int Stack<T>::size() const {
  return stack.getCount();
}

template <typename T>
void Stack<T>::print() const {
  stack.print();
}