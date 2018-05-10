#ifndef QUESTION_H
#define QUESTION_H
#include "Movie.h"
class Question {
	public:
		Question();
		Question(Movie movie);
		Question(Movie movie, bool askYear);

		Movie getMovie();
		string[] getOptions;

		void printQuestion();
		void setMovie(Movie movie);
		void setOptions(string[] options);
	private:
		Movie movie;
		string[4] options;
		bool askYear;
};
#endif
