#include <iostream>
#include <string>
#include "Movie.h"
#include "Node.h"

using namespace std;

int main() {
  Movie movie("Godfather", 1972);
  Node<Movie> *node = new Node<Movie>(movie, NULL, NULL);
  cout << node->getObject().getTitle() << endl;
}
