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
    bool empty() const;
    const T front() const;
    const T back() const;
    void advance();
    void add(T elem);
    void remove();
    void print() const;
    bool search(T s) const;
    int getCount() const;
    void reverse();
  private:
    CNode<T>* cursor;
    int count;
};

#endif