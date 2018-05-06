class Movie{
  public:
    Movie(string title);
    Movie(string title, int year);

    string getTitle();
    string getTagline();
    string getOverview();
    int getYear();
    int getRuntime();

    void setTitle(string title);
    void setTagline(string tagline);
    void setOverview(string overview);
    void setYear(int year);
    void setRuntime(int runtime);

  private:
    string title;
    string tagline;
    string overview;

    int year
    int runtime;
}
