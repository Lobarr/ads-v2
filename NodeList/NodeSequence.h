#ifndef NODESEQUENCE_H
#define NODESEQUENCE_H

#include "./Iterator.h"

namespace NodeList {
  template <typename T>
  class NodeSequence : public NodeListADT<T> {
    public:
      Iterator<T> atIndex(const int i) const;
      int indexOf(const Iterator<T> p) const;
  };
}

#endif