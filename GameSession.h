#ifndef GAMESESSION_H
#define GAMESESSION_H

#include <vector>
#include "Question.h"
#include "LinkedList.h"
#include "RandomUtilities.h"

class GameSession {
  public:
    GameSession(LinkedList<Movie>* movies);
    LinkedList<Question> getQuestions();
    LinkedList<Question> questions;
    void printScore();
  private:
    int score;
    int rightPoints = 10;
    int wrongPoints = 5;
    int numberOfQuestions = 10;
    int numberOfMovies = 2000;
    LinkedList<int> questionIndices;

    void initQuestionIndices();
    void initQuestions(LinkedList<Movie>* movies);
};
#endif
