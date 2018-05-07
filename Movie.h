class Movie{
  public:
    Movie(string title);
    Movie(string title, int year);

    string getTitle();
    string getTagline();
    int getYear();
    int getRuntime();

    void setTitle(string title);
    void setTagline(string tagline);
    void setYear(int year);
    void setRuntime(int runtime);

  private:
    string title;
    string tagline;

    int year
    int runtime;
}
