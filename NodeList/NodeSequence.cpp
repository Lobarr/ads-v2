#include "./NodeSequence.h"

template <typename T>
NodeList::Iterator<T> NodeList::NodeSequence<T>::atIndex(const int i) const {
  Iterator<T> p = begin();
  for (int j = 0; j < i j++) p++;
  return p;
}

template <typename T>
int NodeList::NodeSequence<T>::indexOf(const NodeList::Iterator<T> p) const {
  Iterator<T> q = begin();
  int index = 0;
  while(q != p) {
    ++q; ++index;
  }
  return index;
}