#ifndef STACK_H
#define STACK_H

// #include <vector>
#include "../LinkedLists/SLinkedList/SLinkedList.cpp"
#include <iostream>

template <typename T>
class Stack {
  public:
    Stack();

    void push(const T& input);
    void pop();
    const T* top() const;
    const bool empty() const;
    const unsigned int size() const;
    void print() const;
  
  private:
    SLinkedList<T> stack;
};

#endif