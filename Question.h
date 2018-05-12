#ifndef QUESTION_H
#define QUESTION_H
#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"
#include "RandomUtilities.h"
#include "LinkedList.h"

class Question {
	public:
		Question();
		Question(Movie movie);
		Question(Movie movie, bool askYear, LinkedList<Movie>* movies);

		std::string getCorrectOption();
		Movie getMovie();
		LinkedList<std::string>* getOptions();

		void printQuestion();
		void printOptions();
		void setMovie(Movie movie);
	private:
		int numberOfOptions = 4;
		std::string correctOption;
		Movie movie;
		bool askYear;
		LinkedList<std::string>* options;
		std::vector<char> letters = {'a', 'b', 'c', 'd'};

		void setCorrectOption(int index);
		void initOptions(LinkedList<Movie>* movies);
		void initYearOptions(LinkedList<Movie>* movies);
		void initTitleOptions(LinkedList<Movie>* movies);
};
#endif
