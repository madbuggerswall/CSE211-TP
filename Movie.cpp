#include "Movie.h"
Movie::Movie(std::string title) {
  this->title = title;
}

Movie::Movie(std::string title, int year){
  this->title = title;
  this->year = year;
}

std::string Movie::getTitle(){
  return this->title;
}

std::string Movie::getTagline(){
  return this->tagline;
}

int Movie::getYear(){
  return this->year;
}

int Movie::getRuntime(){
  return this->runtime;
}

void Movie::setTitle(std::string title){
  this->title = title;
}

void Movie::setTagline(std::string tagline){
  this->tagline = tagline;
}
void Movie::setYear(int year){
  this->year = year;
}
void Movie::setRuntime(int runtime){
  this->runtime = runtime;
}
