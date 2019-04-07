#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "../LinkedLists/CLinkedList/CLinkedList.cpp"

template <typename T>
class Queue {
  public:
    Queue();

    void push(const T input);
    void pop()
    T front();
    T rear();
    bool empty();
    int getSize() const;
    void print() const;

  private:
    CLinkedList<T> queue;
    int size;
};

#endif