#include "Movie.h"
Movie::Movie(string title){
  this->title = title;
}

Movie::Movie(string title, int year){
  this->title = title;
  this->year = year;
}

string Movie::getTitle(){
  return this->title;
}

string Movie::getTagline(){
  return this->tagline;
}

string Movie::getOverview(){
  return this->overview;
}

int Movie::getYear(){
  return this->year;
}

int Movie::getRuntime(){
  return this->runtime;
}
