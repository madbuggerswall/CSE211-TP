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
  gameSession.questions.getHead()->getObject().printQuestion();
  gameSession.questions.getHead()->getObject().printOptions();
  string answer;

  while(answer != "q"){
    cin >> answer;
    if(answer == "a"){
      cout << "Could be" << endl;
    }else if(answer == "b"){
      cout << "Could be" << endl;
    }else if(answer == "c"){
      cout << "Could be"<< endl;
    }else if(answer == "d"){
      cout << "Could be" << endl;
    }else{
      cout << "Wrong key" << endl;
    }
  }

  // cout << "Is Empty? : " << allMovies->isEmpty() << endl;
  // int size = allMovies->getSize();
  // cout << "Size: " << size << endl;
  // Node<Movie> *node = allMovies->getHead();
  // while(node != NULL){
  //   Movie movie = node->getObject();
  //   cout << movie.getTitle() << " - " << movie.getYear() << endl;
  //   node = node->getNext();
  // }
}
