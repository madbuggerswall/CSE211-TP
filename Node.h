#ifndef NODE_H
#define NODE_H

template<class T>
class Node {
  public:
    Node();
    Node(T object, Node *prev, Node *next);

    T getObject();
    Node* getNext();
    Node* getPrev();

    void setObject(T object);
    void setPrev(Node* prev);
    void setNext(Node* next);

  private:
    T object;
    Node* next;
    Node* prev;
};
#include "Node.cpp"
#endif
