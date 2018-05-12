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

		Movie getMovie();
		LinkedList<std::string>* getOptions();

		void printQuestion();
		void printOptions();
		void setMovie(Movie movie);
		void setOptions(LinkedList<std::string>* options);
	private:
		Movie movie;
		bool askYear;
		LinkedList<std::string>* options;
		std::vector<char> letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
		void initOptions(LinkedList<Movie>* movies);
};
#endif
