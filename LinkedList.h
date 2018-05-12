#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
template<class T>
class LinkedList{
  public:
    LinkedList();
    int getSize();
    bool isEmpty();
    bool contains(T object);
    Node<T>* getHead();
    Node<T>* getTail();
    Node<T>* getIndex(int index);

    void addToHead(Node<T> *node);
    void addToHead(T& object);
    void addToTail(Node<T> *node);
    void addToTail(T& object);
    void deleteHead();
    void deleteTail();
  private:
    Node<T> *head;
    Node<T> *tail;
};
#include "LinkedList.cpp"
#endif
