#include "./Tree.h"

template <typename T>
T* Node<T>::operator*() const {
  return data;
}

template <typename T>
const Node<T>* Node<T>::getParent() const {
  return parent;
}

template <typename T>
const std::vector<Node<T>*> Node<T>::getChildren() const {
  return children;
}

template <typename T>
const bool Node<T>::isRoot() const {
  return parent == NULL;
}

template <typename T>
const bool Node<T>::isLeaf() const {
  return children.size() == 0;
}

template <typename T>
Tree<T>::Tree(const Node<T>& r = NULL) 
: root(r)
{}

template <typename T>
const int Tree<T>::getSize() const {

}

template <typename T>
const bool Tree<T>::empty() const {
  return root == NULL;
}

template <typename T>
const Node<T>* Tree<T>::getRoot() const {
  if(!root) {
    throw "Tree is empty";
  }
  return root;
}

template <typename T>
int Tree<T>::depth(const Node<T>& n) {
  if(n->isRoot()) {
    return 0;
  }
  return 1 + depth(n->getParent());
}

template <typename T>
int Tree<T>::height(const Node<T>& n) {
  if (n->isLeaf()) return 0;
  int h = 0;
  
}
