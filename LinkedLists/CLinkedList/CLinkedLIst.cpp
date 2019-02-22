#include "./CLinkedList.h"

template <typename T>
CLinkedList<T>::CLinkedList(){
  cursor = NULL;
  count = 0; 
}

template <typename T>
CLinkedList<T>::~CLinkedList(){
  while(!empty()) remove();
}

template <typename T>
bool CLinkedList<T>::empty() const {
  return cursor == NULL;
}

template <typename T>
const T CLinkedList<T>::front() const { 
  return cursor->next->data;
}

template <typename T>
const T CLinkedList<T>::back() const {
  return cursor->data;
}

template <typename T>
void CLinkedList<T>::advance() {
  cursor = cursor->next;
}

template <typename T>
void CLinkedList<T>::add(T elem) {
  CNode<T>* newCNode = new CNode<T>;
  newCNode->data = elem;
  if(!empty()){
    newCNode->next = cursor->next;
    cursor->next = newCNode;
  } else {
    newCNode->next = newCNode;
    cursor = newCNode;
  }
  count++;
}

template <typename T>
void CLinkedList<T>::remove() {
  CNode<T>* old = cursor->next;
  if(old == cursor){
    cursor = NULL;
  } else {
    cursor->next = old->next;
  }
  delete old;
  count--;
}

template <typename T>
int CLinkedList<T>::getCount() const {
  return count;
}

template <typename T>
void CLinkedList<T>::print() const {
  CNode<T>* cur = cursor->next;
  int count = getCount();
  while(count--) {
    std::cout << cur->data << std::endl;
    cur = cur->next;
  }
  std::cout << std::endl;
}

template <typename T>
bool CLinkedList<T>::search(T s) const {
  CNode<T>* cur = cursor->next;
  int count = getCount();
  while(count--) {
    if (cur->data == s) return true;
    cur = cur->next;
  }
  return false;
}