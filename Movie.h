#ifndef MOVIE_H
#define MOVIE_H

#include <string>
class Movie {
  public:
    Movie();
    Movie(std::string title);
    Movie(std::string title, int year);

    std::string getTitle();
    std::string getTagline();
    int getYear();
    int getRuntime();

    void setTitle(std::string title);
    void setTagline(std::string tagline);
    void setYear(int year);
    void setRuntime(int runtime);

  private:
    std::string title;
    std::string tagline;

    int year;
    int runtime;
};
#endif
