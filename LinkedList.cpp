template<class T>
LinkedList<T>::LinkedList(){
  head = 0;
  tail = 0;
}
template<class T>
int LinkedList<T>::getSize(){
  int size = 0;
  if(head == NULL && tail == NULL){
    return size;
  }else{
    Node<T>* node = head;
    while (node != NULL) {
      size++;
      node = node->getNext();
    }
    return size;
  }
}
template<class T>
bool LinkedList<T>::isEmpty(){
  if(head == 0 && tail == 0)
    return true;
  else
    return false;
}
template<class T>
bool LinkedList<T>::contains(T object){
  bool result = false;
  if(head == NULL && tail == NULL){
    return result;
  }else{
    Node<T>* node = head;
    while (node != NULL) {
      if(node->getObject() == object){
        result = true;
        break;
      }
      node = node->getNext();
    }
    return result;
  }
}
template<class T>
Node<T>* LinkedList<T>::getHead(){
  return head;
}
template<class T>
Node<T>* LinkedList<T>::getTail(){
  return tail;
}
template<class T>
Node<T>* LinkedList<T>::getIndex(int index){
  Node<T>* node = head;
  if(index < getSize()){
    for(int i=0; i<index; i++){
      node=node->getNext();
    }
    return node;
  }else{
    return NULL;
  }
}
template<class T>
void LinkedList<T>::addToHead(Node<T> *node){
  if(head != NULL){
    node->setNext(head);
    head = node;
  }else{
    head = tail = node;
  }
}
template<class T>
void LinkedList<T>::addToHead(T& object){
  Node<T>* node = new Node<T>(object);
  if(head != NULL){
    node->setNext(head);
    head = node;
  }else{
    head = tail = node;
  }
}
template<class T>
void LinkedList<T>::addToTail(Node<T> *node){
  if(tail != 0){
    tail->setNext(node);
    tail = tail->getNext();
  } else {
    head = tail = node;
  }
}
template<class T>
void LinkedList<T>::addToTail(T& object){
  Node<T>* node = new Node<T>(object);
  if(tail != 0){
    tail->setNext(node);
    tail = tail->getNext();
  } else {
    head = tail = node;
  }
}
template<class T>
void LinkedList<T>::deleteHead(){

}
template<class T>
void LinkedList<T>::deleteTail(){

}
