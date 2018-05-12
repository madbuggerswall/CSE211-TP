#include <iostream>
#include <string>
#include <fstream>
#include "Movie.h"
#include "DoubleLinkedList.h"
#include "FileUtilities.h"
using namespace std;

int main() {
  DoubleLinkedList<Movie> *allMovies = new DoubleLinkedList<Movie>();
  FileUtilities::initMovies(allMovies);
  FileUtilities::initDates(allMovies);

  cout << "Is Empty? : " << allMovies->isEmpty() << endl;
  int size = allMovies->getSize();
  cout << "Size: " << size << endl;
  Node<Movie> *node = allMovies->getHead();
  while(node != NULL){
    Movie movie = node->getObject();
    cout << movie.getTitle() << " - " << movie.getYear() << endl;
    node = node->getNext();
  }
}
