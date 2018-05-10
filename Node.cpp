template<class T>
Node<T>::Node() {
  next = NULL;
}
template<class T>
Node<T>::Node(T object, Node *next){
  this->object = object;
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
void Node<T>::setObject(T object){
  this->object = object;
}
template<class T>
void Node<T>::setNext(Node *node){
  this->next = node;
}
