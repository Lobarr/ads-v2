#ifndef DEQUE_H
#define DEQUE_H

#include "../../LinkedLists/DLinkedList/DLinkedList.cpp"

template <typename T>
class Deque {
  public:
    Deque();

    void pushFront(const T input);
    void pushBack(const T input);
    void popFront();
    void popBack();
    T front() const;
    T back() const;
    bool empty();
    int getSize() const;
    void print();

  private:
    DLinkedList<T> queue;
};

#endif