#include <iostream>
#include "DLinkedList.h"

template <typename T>
DLinkedList<T>::DLinkedList() {
  head = tail = NULL; 
  size = 0;
}

template <typename T>
DLinkedList<T>::~DLinkedList() {
  while(!empty()) removeFront();
}

template <typename T>
bool DLinkedList<T>::empty() const {
  return (size == 0);
}

template <typename T>
int DLinkedList<T>::getSize() const {
  return size;
}

template <typename T>
const T DLinkedList<T>::front() const {
  assert(!empty());
  return head->data;
}

template <typename T>
const T DLinkedList<T>::back() const {
  assert(!empty());
  return tail->data;
}

template <typename T>
void DLinkedList<T>::addFront(const T& e) {
  DNode<T>* newNode = new DNode<T>;
  DNode<T>* curHead = head;
  newNode->data = e;
  newNode->next = NULL;
  newNode->prev = NULL;
  if(!empty()){
    newNode->next = curHead;
    curHead->prev = newNode;
    head = newNode;
  } else {
    head = tail = newNode;
  }
  size++;
}

template <typename T>
void DLinkedList<T>::addBack(const T& e) {
  DNode<T>* newNode = new DNode<T>;
  DNode<T>* curTail = tail;
  newNode->data = e;
  newNode->next = NULL;
  newNode->prev = NULL;
  if(!empty()){
    newNode->prev = curTail;
    curTail->next = newNode;
    tail = newNode;
  } else {
    head = tail = newNode;
  }
  size++;
}

template <typename T>
void DLinkedList<T>::removeFront() {
  DNode<T>* curHead = head;
  head = curHead->next;
  if (curHead != NULL) delete curHead;
  size--;
}

template <typename T>
void DLinkedList<T>::removeBack() {
  DNode<T>* curTail = tail;
  tail = curTail->prev;
  if (curTail != NULL) delete curTail;
  size--;
}

template <typename T>
void DLinkedList<T>::printDes() const {
  DNode<T>* cur = head;
  int count = getSize();
  while(count--){
    std::cout << cur->data << std::endl;
    cur = cur->next;
  }
  std::cout << std::endl;
}

template <typename T>
void DLinkedList<T>::printAsc() const {
  DNode<T>* cur = tail;
  int count = getSize();
  while(count--){
    std::cout << cur->data << std::endl;
    cur = cur->prev;
  }
  std::cout << std::endl;
}

template <typename T>
T  DLinkedList<T>::search(T s) const {
  DNode<T>* cur = head;
  int count = getSize();
  while(--count != 0){
    if (cur->data == s){
      return cur->data;
    }
    cur = cur->next;
  }
  throw "Can't find element";
}
