#include "GameSession.h"

GameSession::GameSession(LinkedList<Movie>* movies){
  initQuestionIndices();
  initQuestions(movies);
}

LinkedList<Question> GameSession::getQuestions(){
  return this->questions;
}

void GameSession::initQuestionIndices(){
  RandomUtilities randomUtilities;
  int index;
  for(int i=0; i<numberOfQuestions; i++){
    do {
      index = randomUtilities.randomInt(0, numberOfMovies);
    } while(questionIndices.contains(index));
    questionIndices.addToTail(index);
  }
}

void GameSession::initQuestions(LinkedList<Movie>* movies){
  RandomUtilities randomUtilities;
  Node<int> *node = questionIndices.getHead();

  while (node != NULL) {
    Movie movie = movies->getIndex(node->getObject())->getObject();
    bool random = randomUtilities.randomBool();
    Question question(movie, random, movies);
    questions.addToTail(question);
    node=node->getNext();
  }
}
