#include "./Queue.h"

template <typename T>
Queue<T>::Queue() 
: size(0)
{}

template <typename T>
void Queue<T>::push(const T input) {
  queue.add(input);
  queue.advance();
  size++;
}

template <typename T>
void Queue<T>::pop() {
  if(empty()) throw "Queue is empty!";
  queue.remove();
  size--;
}

template <typename T>
T Queue<T>::front() {
  // return queue.
}

template <typename T>
T Queue<T>::rear() {
  
}

template <typename T>
bool Queue<T>::empty() {

}

template <typename T>
int Queue<T>::getSize() {

}

template <typename T>
void Queue<T>::print() {

}