#ifndef QUEUE_H
#define QUEUE_H

#include "../../LinkedLists/CLinkedList/CLinkedList.cpp"

template <typename T>
class Queue {
  public:
    Queue();

    void push(const T input);
    void pop();
    const T* front() const;
    const T* rear() const;
    const bool empty() const;
    const unsigned int getSize() const;
    void print();

  private:
    CLinkedList<T> queue;
};

#endif