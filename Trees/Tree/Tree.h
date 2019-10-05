#ifndef TREE_H
#define TREE_H

#include <vector>
#include <iterator>
#include <algorithm>

template <typename T>
class Node {
  public:
    Node(T& d, Node<T>* p = NULL);
    T* operator*();
    const Node<T>* getParent() const;
    const std::vector<Node<T>*> getChildren() const;
    const bool isRoot() const;
    const bool isLeaf() const;
  private:
    Node<T>* parent;
    std::vector<Node<T>*> children;
    T data;
};

template <typename T>
class Tree { 
  public:
    Tree(const Node<T>& r = NULL);
    const int getSize() const;
    const bool empty() const;
    const Node<T>* getRoot() const;
    static int depth(const Node<T>& n);
    // static int height(const Node<T>& n);
    void preOrderPrint(const Node<T>& n) const;
    void preOrderParenPrint(const Node<T>& n) const;
    void postOrderPrint(const Node<T>& n) const;
  private: 
    Node<T>* root;
    unsigned int size;
};

template <typename T>
using Iterator = std::vector<Node<T>*>::const_iterator;

#endif
