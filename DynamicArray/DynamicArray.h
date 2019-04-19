#include <cstdlib>

#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

template <typename T>
class DynamicArray {
  public:
    DynamicArray(const int size);
    ~DynamicArray();
    void insert(const T& data);
    const T remove(const unsigned int index);
    const unsigned int getSize() const;
    void print() const;
    void sortAsc();
    void sortDes();
  private:
    T* list;
    unsigned int maxSize;
    unsigned int curSize;
};

#endif