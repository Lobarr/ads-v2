#ifndef BINARY_TREE_H
#define BINARY_TREE_H

template <typename T>
class BNode {
  public:
    BNode();
    BNode(T& d, BNode<T>* l, BNode<T>* r, BNode<T>* p);
    const T getData() const;
    const BNode<T>* getParent() const;
    const BNode<T>* getLeft() const;
    void setLeft(BNode<T>& n);
    const BNode<T>* getRight() const;
    void setRight(BNode<T>& n);
    const bool isRoot() const;
    const bool isLeaf() const;
  private:
    BNode<T>* left;
    BNode<T>* right;
    bNode<T>* parent;
    T data;
};

template <typename T>
class BinaryTree {
  public:
    BinaryTree();
    BinaryTree(BNode<T>& n);
    const bool empty() const;
    const BNode<T>* getRoot() const;
  private:
    BNode<T>* root;
};

#endif 