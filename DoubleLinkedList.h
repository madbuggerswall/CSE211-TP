#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include "Node.h"
template<class T>
class DoubleLinkedList{
  public:
    DoubleLinkedList();
    int getSize();
    bool isEmpty();

    Node<T>* getHead();
    Node<T>* getTail();

    void addToHead(Node<T> *node);
    void addToTail(Node<T> *node);
    void deleteHead();
    void deleteTail();

  private:
    Node<T> *head;
    Node<T> *tail;
};
#endif
