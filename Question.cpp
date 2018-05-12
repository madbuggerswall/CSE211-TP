#include "Question.h"
Question::Question() {
  options = new LinkedList<std::string>();
}

Question::Question(Movie movie){
  this->movie = movie;
  options = new LinkedList<std::string>();
}

Question::Question(Movie movie, bool askYear, LinkedList<Movie>* movies){
  this->movie = movie;
  this->askYear = askYear;
  options = new LinkedList<std::string>();
  initOptions(movies);
}

std::string Question::getCorrectOption(){
  return this->correctOption;
}

Movie Question::getMovie(){
  return this->movie;
}

LinkedList<std::string>* Question::getOptions(){
  return this->options;
}

void Question::printQuestion(){
  if(askYear){
    std::cout << "Which year was the movie " << movie.getTitle();
    std::cout << " released?" << std::endl;
  }
  else{
    std::cout << "Which of the following movies was released in ";
    std::cout << movie.getYear() << "?\n";
  }
}

void Question::printOptions(){
  for(int i = 0; i<options->getSize(); i++){
    std::cout << letters.at(i) << ") " << options->getIndex(i)->getObject();
    std::cout << std::endl;
  }
}

void Question::setMovie(Movie movie){
  this->movie = movie;
}

void Question::setCorrectOption(int index){
  switch (index) {
    case 0:
      correctOption = "a";
      break;
    case 1:
      correctOption = "b";
      break;
    case 2:
      correctOption = "c";
      break;
    case 3:
      correctOption = "d";
      break;
    default:
      correctOption = "";
      break;
  }
}

void Question::initOptions(LinkedList<Movie>* movies){
  if(askYear){
    initYearOptions(movies);
  }else{
    initTitleOptions(movies);
  }
}

void Question::initYearOptions(LinkedList<Movie>* movies){
  RandomUtilities randomUtilities(false);
  int correctIndex = randomUtilities.randomInt(0,3);
  setCorrectOption(correctIndex);
  int falseYear;
  for(int i=0; i<numberOfOptions; i++){
    if(i == correctIndex){
      std::string trueYear = std::to_string(movie.getYear()) ;
      options->addToTail(trueYear);
    }else{
      do {
        falseYear = randomUtilities.randomInt(1927, 2016);
      } while(options->contains(std::to_string(falseYear)));
      std::string falseYearText = std::to_string(falseYear);
      options->addToTail(falseYearText);
    }
  }
}

void Question::initTitleOptions(LinkedList<Movie>* movies){
  RandomUtilities randomUtilities(false);
  int correctIndex = randomUtilities.randomInt(0,3);
  setCorrectOption(correctIndex);
  int falseIndex;
  std::string falseTitle;
  for(int i=0; i<numberOfOptions; i++){
    if(i == correctIndex){
      std::string trueTitle = movie.getTitle();
      options->addToTail(trueTitle);
    }else{
      do {
        falseIndex = randomUtilities.randomInt(0,2000);
        falseTitle = movies->getIndex(falseIndex)->getObject().getTitle();
      } while(options->contains(falseTitle));
      options->addToTail(falseTitle);
    }
  }
}
