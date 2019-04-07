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
T Stack<T>::top() {
  if (stack.empty()) throw "Stack Empty";
  return stack.at(stack.getCount()-1)->data;
}

template <typename T>
bool Stack<T>::empty() {
  return stack.empty();
}

template <typename T>
int Stack<T>::size() const {
  return stack.getCount();
}

template <typename T>
void Stack<T>::print() const {
  stack.printDes();
}