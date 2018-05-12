#g++ -std=c++11 -c DoubleLinkedList.cpp
g++ -std=c++11 -c Movie.cpp
g++ -std=c++11 -c Question.cpp
g++ -std=c++11 -g -c GameManager.cpp
g++ -std=c++11 -g Movie.o GameManager.o -o GameManager.out
