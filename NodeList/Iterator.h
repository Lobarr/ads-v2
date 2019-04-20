#ifndef ITERATOR_H
#define ITERATOR_H

#include "./NodeListADT.h"
#include "./Node.h"

namespace NodeList
{
  template <typename T>
  class Iterator {
    public:
      const T* operator*() const;
      const bool operator==(const Iterator& iter) const;
      const bool operator!=(const Iterator& iter) const;
      const Iterator* operator++();
      const Iterator* operator--();
      friend class NodeListADT;
    private:
      Iterator(Node<T>& n);
      Node<T>* node;
  };
} 

#endif