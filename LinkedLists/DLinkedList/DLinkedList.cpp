#include <iostream>
#include <vector>
#include "DLinkedList.h"

template <typename T>
DLinkedList<T>::DLinkedList() {
  head = tail = NULL; 
  count = 0;
}

template <typename T>
DLinkedList<T>::~DLinkedList() {
  while(!empty()) {
    removeFront();
  }
}

template <typename T>
const bool DLinkedList<T>::empty() const {
  return count == 0;
}

template <typename T>
const unsigned int DLinkedList<T>::getCount() const {
  return count;
}

template <typename T>
const T* DLinkedList<T>::front() const {
  assert(!empty());
  return head->data;
}

template <typename T>
const T* DLinkedList<T>::back() const {
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
  count++;
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
  count++;
}

template <typename T>
void DLinkedList<T>::removeFront() {
  DNode<T>* curHead = head;
  head = curHead->next;
  if (curHead != NULL) {
    delete curHead;
  }
  count--;
}

template <typename T>
void DLinkedList<T>::removeBack() {
  DNode<T>* curTail = tail;
  tail = curTail->prev;
  if (curTail != NULL) {
    delete curTail;
  }
  count--;
}

template <typename T>
void DLinkedList<T>::printDes() const {
  DNode<T>* cur = head;
  while(cur != NULL){
    std::cout << cur->data << std::endl;
    cur = cur->next;
  }
  std::cout << std::endl;
}

template <typename T>
void DLinkedList<T>::printAsc() const {
  DNode<T>* cur = tail;
  while(cur != NULL){
    std::cout << cur->data << std::endl;
    cur = cur->prev;
  }
  std::cout << std::endl;
}

template <typename T>
bool  DLinkedList<T>::search(const T s) const {
  DNode<T>* cur = head;
  while(cur != NULL){
    if (cur->data == s) {
      return true;
    }
    cur = cur->next;
  }
  return false;
}

template <typename T>
void DLinkedList<T>::reverse() {
  std::vector<T> vector;
  unsigned int count = getCount();
  while(count--) {
    vector.push_back(front());
    removeFront();
  }
  for (int i = 0; i < vector.size(); i++) {
    addFront(vector.at(i));
  }
}

template <typename T>
const DNode<T>* DLinkedList<T>::at(const int index) const {
  DNode<T>* cur = head;
  unsigned int count = getCount()-1;
  while((index >= 0 && index <= count) && (count--)){
    if(count == index) {
      return cur;
    }
    cur = cur->next;
  }
  return NULL;
}
