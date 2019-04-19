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
const T* Queue<T>::front() const {
  return queue.front();
}

template <typename T>
const T* Queue<T>::rear() const {
  return queue.back();
}

template <typename T>
const bool Queue<T>::empty() const {
  return queue.empty();
}

template <typename T>
const unsigned int Queue<T>::getSize() const {
  return queue.getCount();
}

template <typename T>
void Queue<T>::print() {
  queue.print();
}