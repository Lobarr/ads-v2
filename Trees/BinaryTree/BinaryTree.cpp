#include "./BinaryTree.h"

template <typename T>
BNode<T>::BNode(T& d) {
  data = d;
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
void BNode<T>::setParent(BNode<T>& n) {
  parent = n;
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

template <typename T>
BinaryTree<T>::BinaryTree() {
  root = NULL;
  size = 0;
}

template <typename T>
BinaryTree<T>::BinaryTree(BNode<T>& n) {
  root = n;
  size = 1;
}

template <typename T>
const bool BinaryTree<T>::empty() const {
  return root == NULL;
}

template <typename T>
const int BinaryTree<T>::getSize() const {
  return size;
}

template <typename T>
const BNode<T>* BinaryTree<T>::getRoot() const {
  return root;
}

template <typename T>
void BinaryTree<T>::addNode(BNode<T>& n) {
  if (root == NULL) {
    root = n;
  } else {
    BNode<T>* curNode = root;
    while(curNode != NULL) {
      n.setParent(curNode);
      curNode = (n->getData() > curNode->getData()) ? curNode->getRight() : curNode->getLeft();
    }
    BNode<T>* parent = n.getParent();
    if(n.getData() > parent.getData()) {
      parent.setRight(n);
    } else {
      parent.setLeft(n);
    }
  }
  size++;
}

template <typename T>
void BinaryTree<T>::removeNode(BNode<T>* cur, BNode<T>& n) {

}

template <typename T>
const BNode<T>* BinaryTree<T>::search(T& d) const {
  BNode<T>* curNode = root;
  while(curNode != NULL) {
    if (curNode->getData() == d) {
      return curNode;
    } else {
      curNode = (curNode->getData() < d) ? curNode->getRight() : curNode->getLeft();
    }
  }
  return NULL;
}