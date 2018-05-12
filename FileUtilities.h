#include <fstream>
#include <string>

class FileUtilities{
  public:
    static void initMovies(DoubleLinkedList<Movie> *allMovies);
    static void initDates(DoubleLinkedList<Movie> *allMovies);
};

void FileUtilities::initMovies(DoubleLinkedList<Movie> *allMovies){
  std::fstream titlesFile;
  std::string title;
  titlesFile.open("DataFiles/movie_titles_2k.txt");
  while(getline(titlesFile, title)){
    Movie movie(title);
    Node<Movie>* movieNode = new Node<Movie>(movie, NULL);
    allMovies->addToTail(movieNode);
  }
  titlesFile.close();
}

void FileUtilities::initDates(DoubleLinkedList<Movie> *allMovies){
  std::fstream datesFile;
  std::string year;
  Node<Movie> *node = allMovies->getHead();
  datesFile.open("DataFiles/movie_dates_2k.txt");
  while(getline(datesFile, year)){
    node->getObject().setYear(std::stoi(year));
    node = node->getNext();
  }
  datesFile.close();
}
