template<class T>
DoubleLinkedList<T>::DoubleLinkedList(){
  head = 0;
  tail = 0;
}
template<class T>
int DoubleLinkedList<T>::getSize(){
  int size = 0;
  for (Node<T> node; node != tail; node = node->next) {
    size++;
  }
  return size;
}
template<class T>
bool DoubleLinkedList<T>::isEmpty(){
  if(head == 0 && tail == 0)
    return true;
  else
    return false;
}
template<class T>
Node<T>* DoubleLinkedList<T>::getHead(){
  return head;
}
template<class T>
Node<T>* DoubleLinkedList<T>::getTail(){
  return tail;
}
template<class T>
void DoubleLinkedList<T>::addToHead(Node<T> *node){
  if(head != NULL){
    node->next = head;
    head = node;
  }else{
    head = tail = node;
  }
}
template<class T>
void DoubleLinkedList<T>::addToTail(Node<T> *node){
  tail->next = node;
  tail = node;
}
template<class T>
void DoubleLinkedList<T>::deleteHead(){

}

template<class T>
void DoubleLinkedList<T>::deleteTail(){

}
