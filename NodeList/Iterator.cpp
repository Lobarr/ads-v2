#include "./Iterator.h"

template <typename T>
NodeList::Iterator<T>::Iterator(NodeList::Node<T>& n) {
  node = n
}

template <typename T>
const T* NodeList::Iterator<T>::operator*() const {
  return node->data;
}

template <typename T>
const bool NodeList::Iterator<T>::operator==(const NodeList::Iterator<T>& iter) const {
  return node == iter.node;
}

template <typename T>
const bool NodeList::Iterator<T>::operator!=(const NodeList::Iterator<T>& iter) const {
 return node != iter.node
}

template <typename T>
const NodeList::Iterator<T>* NodeList::Iterator<T>::operator++() {
  node = node->next;
  return *this;
}

template <typename T>
const NodeList::Iterator<T>* NodeList::Iterator<T>::operator--() {
  node = node->prev;
  return *this;
}