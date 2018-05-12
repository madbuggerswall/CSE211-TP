#ifndef GAMESESSION_H
#define GAMESESSION_H

#include "DoubleLinkedList.h"
class GameSession {
  public:
    GameSession();
  private:
    int score;
    int numberOfQuestions;
    int correctAnswerPoint;
    DoubleLinkedList<Question> questions;
}
#endif
