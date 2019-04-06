#include "./Stack.h"

template <typename T>
Stack<T>::Stack() {}

template <typename T>
Stack<T>::Stack(const Stack<T>& cp) {
  for(int i = 0; i < cp.getStack().size(); i++) {
    stack.push_back(cp.getStack().at(i));
  }
}

template <typename T>
void Stack<T>::push(const T& input) {
  stack.push_back(input);
}

template <typename T>
void Stack<T>::pop() {
  stack.pop_back();
}

template <typename T>
T Stack<T>::top() {
  if (stack.empty()) throw "Stack Empty";
  return stack.at(0);;
}

template <typename T>
bool Stack<T>::empty() {
  return stack.empty();
}

template <typename T>
int Stack<T>::size() const {
  return stack.size();
}

template <typename T>
std::vector<T> Stack<T>::getStack() const {
  return stack;
}

template <typename T>
void Stack<T>::print() const {
  for (int i = 0; i < stack.size(); i++) {
    std::cout << "Index: " << i << std::endl;
    std::cout << "Value: " << stack.at(i) << std::endl;
  }
  std::cout << "-- Done --" << std::endl;
}