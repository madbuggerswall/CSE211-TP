template<class T>
class Node{
  public:
    Node();
    Node(const T& object, Node<T> *prev, Node<T> *next);

    T getObject();
    Node<T>* getNext();
    Node<T>* getPrev();

    void setObject(const T& object);
    void setPrev(Node *prev);
    void setNext(Node *next);

  private:
    T object;
    Node<T>* next;
    Node<T>* prev;
};
