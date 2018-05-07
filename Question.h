class Question{
	public:
		Question();
		Question(Movie movie);
		Question(Movie movie, bool isAskingYear);
		
		Movie getMovie();
		string[] getOptions;
		
		void setMovie(Movie movie);
		void setOptions(string[] options);
	private:
		Movie movie;
		string[4] options;
		bool isAskingYear;
}
