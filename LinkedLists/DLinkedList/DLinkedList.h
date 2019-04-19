#ifndef DOUBLE_LINKED_LIST
#define DOUBLE_LINKED_LIST

template <typename T>
struct DNode {
  T data;
  DNode* next;
  DNode* prev;
};

template <typename T>
class DLinkedList {
  public:
    DLinkedList(); 
    ~DLinkedList();
    const bool empty() const;
    const unsigned int getCount() const;
    const T* front() const; 
    const T* back() const;
    void addFront(const T& node); 
    void addBack(const T& node);
    void removeFront();
    void removeBack();
    void printAsc() const;
    void printDes() const;
    bool search(const T s) const;
    void reverse();
    const DNode<T>* at(const int index) const;
  private:
    DNode<T>* head;
    DNode<T>* tail;
    unsigned int count;
};

#endif