#ifndef BINARY_TREE_H
#define BINARY_TREE_H

template <typename T>
class BNode {
public:
    BNode(T& d);
    BNode(T& d, BNode<T>* l, BNode<T>* r, BNode<T>* p);
    const T getData() const;
    const BNode<T>* getParent() const;
    void setParent(BNode<T>& n);
    const BNode<T>* getLeft() const;
    void setLeft(BNode<T>& n);
    const BNode<T>* getRight() const;
    void setRight(BNode<T>& n);
    const bool isRoot() const;
    const bool isLeaf() const;
private:
    BNode<T>* left;
    BNode<T>* right;
    BNode<T>* parent;
    T data;
};

template <typename T>
class BinaryTree {
public:
    BinaryTree();
    BinaryTree(BNode<T>& n);
    const bool empty() const;
    const int getSize() const;
    const BNode<T>* getRoot() const;
    void addNode(BNode<T>& n);
    void removeNode(BNode<T>* cur, BNode<T>& n);
    const BNode<T>* search(T& d) const;
    void preOrderPrint() const;
    void postOrderPrint() const;
private:
    BNode<T>* root;
    int size;
};

#endif
