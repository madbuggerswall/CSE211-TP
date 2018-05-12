#include "Question.h"
Question::Question() {

}
Question::Question(Movie movie){
  this->movie = movie;
}
Question::Question(Movie movie, bool askYear){
  this->movie = movie;
  this->askYear = askYear;
}
Movie Question::getMovie(){
  return this->movie;
}
std::vector<std::string> Question::getOptions(){
  return this->options;
}
void Question::printQuestion(bool askYear){
  if(askYear){
    std::cout << "Which year was the movie " << movie.getTitle();
    std::cout << " released?" << std::endl;
  }
  else{
    std::cout << "Which of the following movies was released in ";
    std::cout << movie.getYear() << "?\n";
  }
}

void Question::printOptions(bool askYear){
  for(int i = 0; i < options.size();i++){
    std::cout << letters.at(i) << ") " << options.at(i) << std::endl;
  }
}

void Question::setMovie(Movie movie){
  this->movie = movie;
}
void Question::setOptions(std::vector<std::string> options){
  this->options = options;
}
