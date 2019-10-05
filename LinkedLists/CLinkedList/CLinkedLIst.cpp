#include <vector>
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
const bool CLinkedList<T>::empty() const {
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
void CLinkedList<T>::add(const T& elem) {
  CNode<T>* newCNode = new CNode<T>;
  newCNode->data = elem;
  if(!empty()){
    newCNode->next = cursor->next;
    cursor->next = newCNode;
  } else {
    newCNode->next = newCNode; // point to itself
    cursor = newCNode;
  }
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
}

template <typename T>
void CLinkedList<T>::print() const {
  CNode<T>* cur = cursor->next;
  while(cur != cursor) {
    std::cout << cur->data << std::endl;
    cur = cur->next;
  }
  std::cout << std::endl;
}

template <typename T>
CNode<T>* CLinkedList<T>::search(const T& s) const {
  CNode<T>* cur = cursor->next;
  while(cur != cursor) {
    if (cur->data == s) {
      return cur;
    }
    cur = cur->next;
  }
  return NULL;
}

template <typename T>
void CLinkedList<T>::reverse() {
  std::vector<T> vector;
  CNode<T>* cur = cursor->next;
  while(cur != cursor){
    T temp = front();
    vector.push_back(temp);
    remove();
    cur = cur->next;
  }
  for (int i = 0; i < vector.size(); i++) {
    add(vector.at(i));
  }
}
