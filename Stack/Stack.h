#ifndef STACK_H
#define STACK_H

#include <vector>
#include <iostream>

template <typename T>
class Stack {
  public:
    Stack();
    Stack(const Stack& cp);

    void push(const T& input);
    void pop();
    T top();
    bool empty();
    int size() const;

    std::vector<T> getStack() const;
    void print() const;
  
  private:
    std::vector<T> stack;
};

#endif