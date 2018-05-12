#ifndef QUESTION_H
#define QUESTION_H
#include "Movie.h"
#include <iostream>
#include <string>
#include <vector>

class Question {
	public:
		Question();
		Question(Movie movie);
		Question(Movie movie, bool askYear);

		Movie getMovie();
		std::vector<std::string> getOptions();

		void printQuestion(bool askYear);
		void printOptions(bool askYear);
		void setMovie(Movie movie);
		void setOptions(std::vector<std::string> options);
	private:
		Movie movie;
		std::vector<std::string> options;
		bool askYear;
		std::vector<char> letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
};
#endif
