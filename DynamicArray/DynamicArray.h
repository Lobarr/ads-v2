#include <cstdlib>

#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

template <typename T>
class DynamicArray {
  public:
    DynamicArray(const int size);
    ~DynamicArray();
    void insert(const T& data);
    T remove(const int index);
    int getSize() const;
    void print() const;
    void sortAsc();
    void sortDes();
  private:
    T* list;
    int maxSize;
    int curSize;
};

#endif