g++ -std=c++11 -c Movie.cpp
g++ -std=c++11 -c Question.cpp
g++ -std=c++11 -c RandomUtilities.cpp
g++ -std=c++11 -c GameSession.cpp
g++ -std=c++11 -g -c GameManager.cpp
g++ -std=c++11 -g *.o -o GameManager.out
