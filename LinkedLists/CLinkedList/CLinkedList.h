#ifndef CIRCLE_LINKED_LIST
#define CIRCLE_LINKED_LIST

template <typename T>
struct CNode {
  T data;
  CNode* next;
};

template <typename T>
class CLinkedList {
  public:
    CLinkedList();
    ~CLinkedList();
    const bool empty() const;
    const T front() const;
    const T back() const;
    void advance();
    void add(const T& elem);
    void remove();
    void print() const;
    CNode<T>* search(const T& s) const;
    void reverse();
  private:
    CNode<T>* cursor;
};

#endif
