#include "GameSession.h"

GameSession::GameSession(LinkedList<Movie>* movies){
  initQuestionIndices();
  initQuestions(movies);
}

LinkedList<Question> GameSession::getQuestions(){
  return this->questions;
}

int GameSession::getCorrectPoints(){
  return this->correctPoints;
}

int GameSession::getWrongPoints(){
  return this->wrongPoints;
}

void GameSession::setScore(int score){
  this->score=score;
}

void GameSession::addScore(int points){
  this->score += points;
}

void GameSession::printScore(){
  std::cout << "SCORE: " << score << std::endl;
}

void GameSession::session(){
  Node<Question>* currentNode = questions.getHead();
  std::string input = "";
  while(input != "q" && currentNode != NULL){
    Question currentQuestion = currentNode->getObject();
    printScore();
    currentQuestion.printQuestion();
    currentQuestion.printOptions();
    std::cin >> input;
    if(input == currentQuestion.getCorrectOption()){
      std::cout << "Correct!\t"<< "+"<< correctPoints << " points" << std::endl;
      addScore(correctPoints);
    }else if(!isInputValid(input)){
      std::cout << "ERROR! Press A, B, C or D to answer and Q to quit.";
      std::cout << std::endl;
      continue;
    }else if(input == "q"){
      break;
    }
    else{
      std::cout << "Wrong!\t" << "-" << wrongPoints << " points" << std::endl;
      addScore(-wrongPoints);
    }
    currentNode = currentNode->getNext();
  }
  std::cout << "\nYour score:\t"<< score << std::endl;
}

bool GameSession::isInputValid(std::string input){
  if(input == "a")
    return true;
  else if(input == "b")
    return true;
  else if(input == "c")
    return true;
  else if(input == "d")
    return true;
  else if(input == "q")
    return true;
  else
    return false;
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
