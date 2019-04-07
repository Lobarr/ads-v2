#ifndef STACK_H
#define STACK_H

// #include <vector>
#include "../LinkedLists/DLinkedList/DLinkedList.cpp"
#include <iostream>

template <typename T>
class Stack {
  public:
    Stack();

    void push(const T& input);
    void pop();
    T top();
    bool empty();
    int size() const;
    void print() const;
  
  private:
    DLinkedList<T> stack;
};

#endif