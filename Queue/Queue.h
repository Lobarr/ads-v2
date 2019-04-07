#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
  public:
    Queue();

    void enqueue(T input);
    void dequeue()
    T top();
    bool empty();
    int size() const;
    void print() const;

  private:
  
};

#endif