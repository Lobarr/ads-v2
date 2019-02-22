#include <iostream>
#include "SLinkedList.h"

template <typename T>
SLinkedList<T>::SLinkedList() {
  head = NULL;
}

template <typename T>
SLinkedList<T>::~SLinkedList() {
  while(!empty()) removeFront();
}

template <typename T>
bool SLinkedList<T>::empty() const {
  return head == NULL;
}

template <typename T>
const T SLinkedList<T>::front() const {
  return head->data;
}

template <typename T>
void SLinkedList<T>::addFront(const T& e) {
  SNode<T>* newHead = new SNode<T>;
  newHead->data = e;
  newHead->next = head;
  head = newHead;
}

template <typename T>
void SLinkedList<T>::removeFront() {
  SNode<T>* prevHead = head;
  head = prevHead->next;
  delete prevHead;
}

template <typename T>
void SLinkedList<T>::print() const {
  SNode<T>* cur = head;
  while(cur != NULL){
    std::cout << cur->data << std::endl;
    cur = cur->next;
  }
  std::cout << std::endl;
}


template <typename T>
bool SLinkedList<T>::search(T s) const {
  SNode<T> cur = head;
  while(cur != NULL){
    if(cur->data == s) return true;
  }
  return false;
}