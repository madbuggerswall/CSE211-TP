#include "Movie.h"
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  Movie movie("Godfather", 1972);
  Node<Movie> *node = new Node<Movie>(movie, NULL, NULL);
  cout << node->getObject().getTitle() << endl;
}
