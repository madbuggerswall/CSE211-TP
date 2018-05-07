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

template<class T>
Node<T>::Node() {
  next = 0;
  prev = 0;
}
template<class T>
Node<T>::Node(T object, Node *prev, Node *next){
  this->object = object;
  this->prev = prev;
  this->next = next;
}
template<class T>
T Node<T>::getObject(){
  return object;
}
template<class T>
Node<T>* Node<T>::getNext(){
  return next;
}
template<class T>
Node<T>* Node<T>::getPrev(){
  return prev;
}
template<class T>
void Node<T>::setObject(T object){
  this->object = object;
}
template<class T>
void Node<T>::setPrev(Node *prev){
  this->prev = prev;
}
template<class T>
void Node<T>::setNext(Node *next){
  this->next = next;
}
#endif
