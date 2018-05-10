#ifndef NODE_H
#define NODE_H

template<class T>
class Node {
  public:
    Node();
    Node(T object,  Node *next);

    T getObject();
    Node* getNext();

    void setObject(T object);
    void setNext(Node* next);

  private:
    T object;
    Node* next;
};
#include "Node.cpp"
#endif
