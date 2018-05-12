#include <iostream>
#include <string>
#include <fstream>
#include "Movie.h"
#include "LinkedList.h"
#include "FileUtilities.h"
#include "GameSession.h"

using namespace std;

int main() {
  LinkedList<Movie> *allMovies = new LinkedList<Movie>();
  FileUtilities::initMovies(allMovies);
  FileUtilities::initDates(allMovies);

  GameSession gameSession(allMovies);
  gameSession.session();
}
