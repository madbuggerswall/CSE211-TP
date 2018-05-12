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

    int getCorrectPoints();
    int getWrongPoints();
    void setScore(int score);
    void addScore(int points);
    void printScore();
    void session();
  private:
    int score = 0;
    int correctPoints = 10;
    int wrongPoints = 5;
    int numberOfQuestions = 10;
    int numberOfMovies = 2000;
    LinkedList<int> questionIndices;

    bool isInputValid(std::string input);
    void initQuestionIndices();
    void initQuestions(LinkedList<Movie>* movies);
};
#endif
