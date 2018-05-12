#ifndef GAMESESSION_H
#define GAMESESSION_H

#include <vector>
#include "Question.h"
#include "DoubleLinkedList.h"
#include "RandomUtilities.h"

class GameSession {
  public:
    GameSession(DoubleLinkedList<Movie>* movies);
    DoubleLinkedList<Question> getQuestions();
    void printScore();
  private:
    int score;
    int rightPoints = 10;
    int wrongPoints = 5;
    int numberOfQuestions = 10;
    int numberOfMovies = 2000;
    DoubleLinkedList<int> questionIndices;
    DoubleLinkedList<Question> questions;

    void initQuestionIndices();
    void initQuestions(DoubleLinkedList<Movie>* movies);
};
#endif
