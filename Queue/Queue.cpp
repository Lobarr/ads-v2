#include "./Queue.h"

template <typename T>
Queue<T>::Queue() {}

template <typename T>
void Queue<T>::push(const T input) {
  queue.add(input);
  queue.advance();
}

template <typename T>
void Queue<T>::pop() {
  if(empty()) throw "Queue is empty!";
  queue.remove();
}

template <typename T>
T Queue<T>::front() {
  return queue.front();
}

template <typename T>
T Queue<T>::rear() {
  return queue.back();
}

template <typename T>
bool Queue<T>::empty() {
  return queue.empty();
}

template <typename T>
int Queue<T>::getSize() const {
  return queue.getCount();
}

template <typename T>
void Queue<T>::print() {
  queue.print();
}