#ifndef NODE_H
#define NODE_H

namespace NodeList {
  template <typename T>
  struct Node {
    T data;
    Node* next;
    Node* prev;
  };
}

#endif