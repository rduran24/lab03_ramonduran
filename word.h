#ifndef _WORD_H
#define _WORD_H

#include <string>
#include "file.h"

#define LIMIT 10000

class Word{
	std::string word;
	File file[10];
	int totalCount;

public:
	Word() {file[10]; totalCount = -1;}
	Word(File f, int total);

	void setWord(std::string a, std::string fileName);
	std::string getWord() const;
	int getTotal() const;
	void increaseTotal();
	void addFile(File f);
};


#endif
