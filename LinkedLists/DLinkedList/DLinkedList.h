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
    bool empty() const;
    int getSize() const;
    const T front() const; 
    const T back() const;
    void addFront(const T& node); 
    void addBack(const T& node);
    void removeFront();
    void removeBack();
    void printAsc() const;
    void printDes() const;
    T search(T s) const;
  private:
    DNode<T>* head;
    DNode<T>* tail;
    int size;
};

#endif