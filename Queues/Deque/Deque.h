#ifndef DEQUE_H
#define DEQUE_H

#include "../../LinkedLists/DLinkedList/DLinkedList.cpp"

template <typename T>
class Deque {
  public:
    Deque();

    void pushFront(const T& input);
    void pushBack(const T& input);
    void popFront();
    void popBack();
    const T* front() const;
    const T* back() const;
    const bool empty() const;
    const unsigned int getSize() const;
    void print() const;

  private:
    DLinkedList<T> queue;
};

#endif