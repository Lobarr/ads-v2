#include <exception>
#include <iostream>
#include "DynamicArray.h"
#include "../Sorting/InsertionSort.cpp"

template <typename T>
DynamicArray<T>::DynamicArray(const int size)
: maxSize(size), curSize(0)
{
  list = new T[size];
}

template <typename T>
DynamicArray<T>::~DynamicArray() {
  delete[] list;
}

template <typename T>
void DynamicArray<T>::insert(const T& data) {
  if (curSize == maxSize) {
    throw "Array is full";
  }
  list[curSize++] = data;
}

template <typename T>
const T DynamicArray<T>::remove(const unsigned int index) {
  if (index < 0 || index > maxSize - 1) {
    throw "Index out of range";
  }
  T cur = list[index];
  for (int i = index + 1; i < curSize; i++ ) {
    list[i - 1] = list[i];
  }
  curSize--;
  return cur;
}

template <typename T>
const unsigned int DynamicArray<T>::getSize() const {
  return curSize;
}

template <typename T>
void DynamicArray<T>::print() const {
  for (int i = 0; i < curSize; i++) {
    std::cout << list[i] << std::endl;
  }
}

template <typename T>
void DynamicArray<T>::sortAsc() {
  insertionSortAsc(list, curSize);
}

template <typename T>
void DynamicArray<T>::sortDes() {
  insertionSortDes(list, curSize);
}
