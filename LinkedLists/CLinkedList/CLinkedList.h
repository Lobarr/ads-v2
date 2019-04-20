#ifndef CIRCLE_LINKED_LIST
#define CIRCLE_LINKED_LIST

template <typename T>
struct LinkCNode {
  T data;
  CNode* next;
};

template <typename T>
class CLinkedList {
  public:
    CLinkedList();
    ~CLinkedList();
    const bool empty() const;
    const T* front() const;
    const T* back() const;
    void advance();
    void add(const T& elem);
    void remove();
    void print() const;
    const bool search(const T& s) const;
    const unsigned int getCount() const;
    void reverse();
  private:
    CNode<T>* cursor;
    unsigned int count;
};

#endif