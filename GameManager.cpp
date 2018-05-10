#include <iostream>
#include <string>
#include <fstream>
#include "Movie.h"
#include "DoubleLinkedList.h"

using namespace std;

int main() {
  // Movie movie("Godfather", 1972);
  // Node<Movie> *node = new Node<Movie>(movie, NULL);
  // cout << node->getObject().getTitle() << endl;

  DoubleLinkedList<Movie> allMovies;
  string title;


  fstream titlesFile;
  titlesFile.open("DataFiles/movie_titles_2k.txt");
  while(getline(titlesFile, title)){
    Movie movie(title);
    Node<Movie>* movieNode = new Node<Movie>(movie, NULL);
    allMovies.addToTail(movieNode);
  }
  titlesFile.close();
  cout << "Is Empty? : " << allMovies.isEmpty() << endl;
  int size = allMovies.getSize();
  cout << "Size: " << size << endl;
}
