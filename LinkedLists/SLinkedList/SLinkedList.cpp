#include <iostream>
#include <vector>
#include "SLinkedList.h"

template <typename T>
SLinkedList<T>::SLinkedList()
: head(NULL), count(0)
{}

template <typename T>
SLinkedList<T>::~SLinkedList() {
  while (!empty()) {
    removeFront();    
  } 
}

template <typename T>
const bool SLinkedList<T>::empty() const {
  return head == NULL;
}

template <typename T>
const T* SLinkedList<T>::front() const {
  return head->data;
}

template <typename T>
void SLinkedList<T>::addFront(const T& e) {
  SNode<T>* newHead = new SNode<T>;
  newHead->data = e;
  newHead->next = head;
  head = newHead;
  count++;
}

template <typename T>
void SLinkedList<T>::removeFront() {
  SNode<T>* prevHead = head;
  head = prevHead->next;
  delete prevHead;
  count--;
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
const bool SLinkedList<T>::search(const T& s) const {
  SNode<T> cur = head;
  while(cur != NULL){
    if(cur->data == s) {
      return true;
    }
  }
  return false;
}

template <typename T>
void SLinkedList<T>::reverse() {
  std::vector<T> vector;
  SNode<T>* cur = head;
  while(cur != NULL) {
    vector.push_back(cur->data);
    cur = cur->next;
    removeFront();
  }
  for (int i = 0; i < vector.size(); i++) {
    addFront(vector.at(i));
  }
}

template <typename T>
const SNode<T>* SLinkedList<T>::getHead() const {
  return head;
}

template <typename T>
const unsigned int SLinkedList<T>::getCount() const {
  return count;
}
