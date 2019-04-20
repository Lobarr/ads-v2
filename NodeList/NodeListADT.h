#ifndef NODELISTADT_H
#define NODELISTADT_H

#include "./Iterator.h"

namespace NodeList {
  template <typename T>
  class NodeListADT {
    public:
      NodeListADT();
      ~NodeListADT();
      const int getSize() const;
      const bool empty() const;
      const Iterator<T>* begin() const;
      const Iterator<T>* end() const;
      void insertFront(const T& e);
      void insertBack(const T& e);
      void insert(const Iterator<T>& iter, const T& e);
      void eraseFront();
      void eraseBack();
      void erase(const Iterator<T>& iter);
    private:
      int size;
      Node<T>* header;
      Node<T>* trailer;
  };
}

#endif