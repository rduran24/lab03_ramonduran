wordsearch: wordsearch.cpp bag.cpp

	g++ -std=c++11 -o wordsearch bag.cpp wordsearch.cpp
clean:
	rm wordsearch
