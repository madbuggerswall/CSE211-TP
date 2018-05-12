
## CSE 211 Data Structures &amp; Algorithms Term Project

* This is a term project I did for my **Data Structures** class.
* It is a simple movie-quiz that randomly selects 10 movies from the movie database.
* There are 2 types of questions:
  * _Which year was the Pulp Fiction released?_
  * _Which of the following movies was released in 2014?_
* Movie data is a modified version of [**TMDB 5000 Movie Dataset**][tmdb]
[tmdb]: (https://www.kaggle.com/tmdb/tmdb-movie-metadata)

> I sorted the [movies][tmdb] by their `popularity` and get the first 2000 movie with a little `python` script. **Titles** and **years** of the movies are stored in **separate files** because I wanted to avoid parsing.

### Modifying data with Python
```python
tmdb_DF = pandas.read_csv("tmdb_5000_movies.csv")
tmdb_DF = tmdb_DF.sort_values(by=["popularity"], ascending=False)
movieDF = tmdb_DF[["title", "release_date"]]
```

### How to run
```sh
./compileAll.sh
./GameManager.out
```

### In the `main()` function
```cpp
LinkedList<Movie> *allMovies = new LinkedList<Movie>();
FileUtilities::initMovies(allMovies);
FileUtilities::initDates(allMovies);

GameSession gameSession(allMovies);
gameSession.session();
```
