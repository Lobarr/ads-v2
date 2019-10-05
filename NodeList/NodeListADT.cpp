#include "./NodeListADT.h"

template <typename T>
NodeList::NodeListADT<T>::NodeListADT() {
  size = 0;
  header = new NodeList::Node;
  trailer = new NodeList::Node;
  header->next = trailer;
  trailer->prev = header;
}

template <typename T>
NodeList::NodeListADT<T>::~NodeListADT() {
  while(!empty()) eraseFront();
}

template <typename T>
const int NodeList::NodeListADT<T>::getSize() const {
  return size;
}

template <typename T>
const bool NodeList::NodeListADT<T>::empty() const {
  return size == 0;
}

template <typename T>
const NodeList::Iterator<T>* NodeList::NodeListADT<T>::begin() const {
  return NodeList::Iterator<T>(header->next);
}

template <typename T>
const NodeList::Iterator<T>* NodeList::NodeListADT<T>::end() const {
  return NodeList::Iterator<T>(trailer);
}

template <typename T>
void NodeList::NodeListADT<T>::insertFront(const T& e) {
  insert(begin(), e);
}

template <typename T>
void NodeList::NodeListADT<T>::insertBack(const T& e) {
  insert(end(), e);
}

template <typename T>
void NodeList::NodeListADT<T>::insert(const NodeList::Iterator<T>& iter, const T& e) {
  Node<T>* w = iter.node;
  Node<T>* u = w->prev;
  Node<T>* v = new Node<T>();
  v->data = e;
  v->next = w; w->prev = v;
  v->prev = u; u->next = v;
  size++;
}

template <typename T>
void NodeList::NodeListADT<T>::eraseFront() {
  erase(begin());
}

template <typename T>
void NodeList::NodeListADT<T>::eraseBack() {
  erase(--end());
}

template <typename T>
void NodeList::NodeListADT<T>::erase(const NodeList::Iterator<T>& iter) {
  Node<T>* v = iter.node;
  Node<T>* W = v->next;
  Node<T>* u = v->prev;
  u->next = w; w->prev = u;
  delete v;
  size--;
}
