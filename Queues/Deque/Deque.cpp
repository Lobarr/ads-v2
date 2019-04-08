#include "./Deque.h"

template <typename T>
Deque<T>::Deque() {}

template <typename T>
void Deque<T>::pushFront(const T input) {
  queue.addFront(input);
}

template <typename T>
void Deque<T>::pushBack(const T input) {
  queue.addBack(input);
}

template <typename T>
void Deque<T>::popFront() {
  if(empty()) throw "Queue is empty!";
  queue.removeFront();
}

template <typename T>
void Deque<T>::popBack() {
  if(empty()) throw "Queue is empty!";
  queue.removeBack();
}

template <typename T>
T Deque<T>::front() const {
  return queue.front();
}

template <typename T>
T Deque<T>::back() const {
  return queue.back();
}

template <typename T>
bool Deque<T>::empty() {
  return queue.empty();
}

template <typename T>
int Deque<T>::getSize() const {
  return queue.getCount();
}

template <typename T>
void Deque<T>::print() {
  queue.printAsc();
}