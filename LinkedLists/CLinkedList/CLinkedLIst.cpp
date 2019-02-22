#include "./CLinkedList.h"

template <typename T>
CLinkedList<T>::CLinkedList(){
 cursor = NULL;
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
void CLinkedList<T>::add(T& elem) {
  CNode<T>* newCNode = new CNode<T>;
  newCNode->data = elem;
  if(!empty()){
    newCNode->next = cursor->next;
    cursor->next = newCNode;
  } else {
    newCNode->next = newCNode;
    cursor = newCNode;
  }
}

template <typename T>
void CLinkedList<T>::remove() {
  CNode<T>* old = cursor->next;
  if(old == cursor){
    cursor = NULL;
  } else {
    old = cursor->next->next;
  }
  delete old;
}