#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

template <typename T> 
class Vector {
  public:
    Vector(const unsigned int size);
    ~Vector();
    const bool empty() const;
    const T at(const unsigned int i) const;
    void set(const unsigned int i, const T& e);
    void insert(const unsigned int i, const T& e);
    void erase(const unsigned int i);
    void print() const;
    T operator[](const int i);
    void reserve(const int n);
    const unsigned int getCount() const;
    const unsigned int getSize() const;
  private:
    T* list;
    unsigned int size;
    unsigned int count;
};

#endif