#ifndef SINGLE_LINKED_LIST
#define SINGLE_LINKED_LIST

template <typename T>
struct SNode {
  T data;
  SNode* next;
};

template <typename T>
class SLinkedList {
  public:
    SLinkedList(); 
    ~SLinkedList();
    bool empty() const;
    const T front() const; 
    void addFront(const T& node); 
    void removeFront();
    void print() const;
    bool search(T s) const;
  private:
    SNode<T>* head;
};

#endif