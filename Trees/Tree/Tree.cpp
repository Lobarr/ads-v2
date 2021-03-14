#include "./Tree.h"
#include <iostream>

template <typename T>
Node<T>::Node(T& d, Node<T>* p) {
    data = d;
    parent = p;
}

template <typename T>
T* Node<T>::operator*() {
    return &data;
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
Tree<T>::Tree(const Node<T>& r)
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

    int maxChildHeight = 0;
    std::vector<Node<T>*> children = n->getChildren();

    for(Iterator<T> iter = children.begin(); iter != children.end(); iter++) {
        maxChildHeight = std::max(maxChildHeight, height(*iter));
    }

    return 1 + maxChildHeight;
}

template <typename T>
void Tree<T>::preOrderPrint(const Node<T>& n) const {
    std::cout << *n;
    for (Iterator<T> iter = n.children().begin(); iter != n.children().end(); iter++) {
        std::cout << " ";
        preorderPrint(*iter);
    }
}

template <typename T>
void Tree<T>::preOrderParenPrint(const Node<T>& n) const {
    std::cout << *n;
    if(!n.isLeaf()) {
        std::cout << "( ";
        for(Iterator<T> iter = n.children().begin(); iter != n.children().end(); iter++) {
            if(iter != n.children().begin()) std::cout << " ";
            preorderParenPrint(*iter);
        }
        std::cout << " )";
    }
}

template <typename T>
void Tree<T>::postOrderPrint(const Node<T>& n) const {
    for (Iterator<T> iter = n.children().begin(); iter != n.children().end(); iter++) {
        std::cout << " ";
        preorderPrint(*iter);
    }
    std::cout << *n;
}
