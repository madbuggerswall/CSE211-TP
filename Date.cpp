#include "Date.h"
Date::Date(int day, int month, int year){
  this->day = day;
  this->month = month;
  this->year = year;
}

int Date::getDay(){
  return this->day;
}
int Date::getMonth(){
  return this->month;
}
int Date::getYear(){
  return this->year;
}

void Date::setDay(int day){
  this->day = day;
}

void Date::setMonth(int month){
  this->month = month;
}

void Date::setYear(int year){
  this->year = year;
}
