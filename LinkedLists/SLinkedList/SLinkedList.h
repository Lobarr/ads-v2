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
    const bool empty() const;
    const T* front() const; 
    void addFront(const T& node); 
    void removeFront();
    void print() const;
    const bool search(const T& s) const;
    void reverse();
    const SNode<T>* getHead() const;
    const unsigned int getCount() const;
  private:
    SNode<T>* head;
    unsigned int count;
};

#endif