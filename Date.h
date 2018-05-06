class Date{
  public:
    Date(int day, int month, int year);

    int getDay();
    int getMonth();
    int getYear();

    void setDay(int day);
    void setMonh(int month);
    void setYear(int year);
  private:
    int day;
    int month;
    int year;
}
