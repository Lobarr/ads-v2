#include "./BinaryTree.h"

template <typename T>
BNode<T>::BNode() {
  left = right = parent = NULL;
}

template <typename T>
BNode<T>::BNode(T& d, BNode<T>* l, BNode<T>* r, BNode<T>* p) {
  data = d;
  left = l;
  right = r;
  parent = p;
}

template <typename T>
const T BNode<T>::getData() const {
  return data;
}

template <typename T>
const BNode<T>* BNode<T>::getParent() const {
  return parent;
}

template <typename T>
const BNode<T>* BNode<T>::getLeft() const {
  return left;
}

template <typename T>
void BNode<T>::setLeft(BNode<T>& n) {
  left = n;
}

template <typename T>
const BNode<T>* BNode<T>::getRight() const {
  return right;
}

template <typename T>
void BNode<T>::setRight(BNode<T>& n) {
  right = n;
}

template <typename T>
const bool BNode<T>::isRoot() const {
  return parent == NULL;
}

template <typename T>
const bool BNode<T>::isLeaf() const {
  return left == NULL && right == NULL && parent != NULL;
}