#include "Node.h"
template<class T>
class DoubleLinkedList{
  public:
    DoubleLinkedList();
    int getSize();
    bool isEmpty();

    Node<T>* getHead();
    Node<T>* getTail();

    void addToHead(Node *node);
    void addToTail(Node *node);
  private:
    Node<T> *head;
    Node<T> *tail;
};
