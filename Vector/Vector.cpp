#include "./Vector.h"
#include <algorithm>

template <typename T>
Vector<T>::Vector(const unsigned int size)
: size(size), count(0)
{
  list = new T[size];
}

template <typename T>
Vector<T>::~Vector() {
  delete[] list;
}

template <typename T>
const bool Vector<T>::empty() const {
  return count == 0;
}

template <typename T>
const T Vector<T>::at(const unsigned int i) const {
  if (i >= size) throw "Invalid index";
  return list[i];
}

template <typename T>
void Vector<T>::set(const unsigned int i, const T& e){
  if (i >= size) throw "Invalid index";
  if (!list[i]) count++;
  list[i] = e;
}

template <typename T>
void Vector<T>::insert(const unsigned int i, const T& e) {
  if(count >= size){
    reserve(std::max(1, 2 * (int)count));
  }
  for (int j = count - 1; j >= (int)i; j--) {
    list[j+1] = list[j];
  }
  list[i] = e;
  count++;
}

template <typename T>
void Vector<T>::erase(const unsigned int i) {
  for(unsigned int j = i+1; j < count; j++) {
    list[j - 1] = list[j];
  }
  count--; 
}

template <typename T>
void Vector<T>::print() const { 
  for(unsigned int i = 0; i < count; i++) {
    std::cout << "Index - " << i << std::endl;
    std::cout << "Value - " << list[i] << std::endl;
  }
  std::cout << std::endl;
}

template <typename T>
T Vector<T>::operator[](int i) {
  return list[i];
}

template <typename T>
void Vector<T>::reserve(const int n){
  if (size >= n) return;
  T* newList = new T[n];
  for (unsigned int j = 0; j < count; j++){
    newList[j] = list[j];
  }
  if (list != NULL) delete[] list;
  list = newList;
  size = n;
}

template <typename T>
const unsigned int Vector<T>::getCount() const {
  return count;
}


template <typename T>
const unsigned int Vector<T>::getSize() const {
  return size;
}